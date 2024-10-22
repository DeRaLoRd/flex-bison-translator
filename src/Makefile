NAME = translate

main: bs fl
	gcc lex.yy.c $(NAME).tab.c -o $(NAME) 

fl:
	flex $(NAME).l

bs:
	bison -d $(NAME).y