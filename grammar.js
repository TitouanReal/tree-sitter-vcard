/**
 * @file vCard parser
 * @author Titouan Real <titouan.real@gmail.com>
 * @license APACHE-2.0 OR MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "vcard",

  extras: ($) => ["\r\n", "\n"],

  rules: {
    source_file: ($) =>
      seq(repeat(seq($.property, choice("\r\n", "\n"))), optional($.property)),

    property: ($) =>
      seq(
        optional(seq($.group, ".")),
        $.property_name,
        repeat(seq(";", $.parameter)),
        ":",
        $.property_value,
      ),

    // TODO: Support line continuation
    group: ($) => /[A-Za-z0-9-]+/,

    // TODO: Support line continuation
    property_name: ($) => /[A-Za-z0-9-]+/,

    // TODO: Split multi values
    property_value: ($) =>
      repeat1(choice(/[^\r\n]/, "\r\n ", "\r\n\t", "\n ", "\n\t")),

    parameter: ($) =>
      seq(
        $.parameter_name,
        "=",
        $.parameter_value,
        repeat(seq(",", $.parameter_value)),
      ),

    // TODO: Support line continuation
    parameter_name: ($) => /[A-Za-z0-9-]+/,

    // TODO: Support line continuation
    parameter_value: ($) => choice(/[^";:,\x00-\x1F]+/, /"[^"\x00-\x1F]+"/),
  },
});
