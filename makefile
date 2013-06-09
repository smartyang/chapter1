#makefile
main: main.o sqstack.o
	gcc -o main main.o sqstack.o
main.o: main.c 
	gcc -c main.c
sqstack.o: sqstack.c
	gcc -c sqstack.c

