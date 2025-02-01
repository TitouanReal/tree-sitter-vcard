import XCTest
import SwiftTreeSitter
import TreeSitterVcard

final class TreeSitterVcardTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_vcard())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading vCard grammar")
    }
}
