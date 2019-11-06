flex parser.l
yacc -d -v parser.y
gcc -o parser y.tab.c lex.yy.c -lfl
