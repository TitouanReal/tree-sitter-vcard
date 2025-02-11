package tree_sitter_vcard_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_vcard "github.com/titouanreal/tree-sitter-vcard/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vcard.Language())
	if language == nil {
		t.Errorf("Error loading vCard grammar")
	}
}
