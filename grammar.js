/**
 * @file vCard parser
 * @author Titouan Real <titouan.real@gmail.com>
 * @license APACHE-2.0 OR MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "vcard",

  extras: ($) => [],

  rules: {
    source_file: ($) => repeat(seq($.property, repeat1($.crlf))),

    crlf: ($) => "\r\n",

    property: ($) =>
      seq(
        // optional(seq($.group, ".")),
        $.property_name,
        // repeat(seq(";", $.parameter)),
        ":",
        $.property_value,
      ),

    // group: ($) => /[A-Za-z0-9-]+/,

    property_name: ($) => /[A-Za-z0-9-(\r\n\x20)(\r\n\t)]+/,

    property_value: ($) => /[A-Za-z0-9-]*/,

    // parameter: ($) =>
    //   seq(
    //     $.parameter_name,
    //     "=",
    //     $.parameter_value,
    //     repeat(seq(",", $.parameter_value)),
    //   ),

    // parameter_name: ($) => /[A-Za-z0-9-]/,

    // parameter_value: ($) => choice(/[^";:,\x00-\x1F]+/, /"[^"\x00-\x1F]+"/),
  },
});
