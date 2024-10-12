NAME = translate

main: fl
	gcc lex.yy.c -o $(NAME) -L. -lfl

fl:
	flex $(NAME).l