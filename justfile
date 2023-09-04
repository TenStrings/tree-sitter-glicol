generate:
	tree-sitter generate

test:
	tree-sitter generate
	tree-sitter test

parse:
	tree-sitter generate
	tree-sitter parse 'test/vectors/**/*.glicol' --quiet --stat

helix:
	cp -r ./queries/* ~/.config/helix/runtime/queries/glicol
	hx --grammar build
