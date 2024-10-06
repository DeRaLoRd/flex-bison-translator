main: fl
	gcc lex.yy.c -o test -L. -lfl

fl:
	flex lex.l