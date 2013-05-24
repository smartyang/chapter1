#makefile
main: main.o sqlist.o
	gcc -o main main.o sqlist.o
main.o: main.c 
	gcc -c main.c
sqlist.o: sqlist.c
	gcc -c sqlist.c
