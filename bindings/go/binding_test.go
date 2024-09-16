package tree_sitter_dune_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-dune"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dune.Language())
	if language == nil {
		t.Errorf("Error loading Dune grammar")
	}
}
