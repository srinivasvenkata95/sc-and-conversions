main: main.c add.c rec.c rev.c
	gcc -o main main.c rev.c rec.c add.c -lm
