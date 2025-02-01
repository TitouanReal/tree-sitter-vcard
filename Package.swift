// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterVcard",
    products: [
        .library(name: "TreeSitterVcard", targets: ["TreeSitterVcard"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterVcard",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterVcardTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterVcard",
            ],
            path: "bindings/swift/TreeSitterVcardTests"
        )
    ],
    cLanguageStandard: .c11
)
