#makefile
main: main.o sqlist.o linklist.o
	gcc -o main main.o sqlist.o linklist.o
main.o: main.c 
	gcc -c main.c
sqlist.o: sqlist.c
	gcc -c sqlist.c
linklist.o: LinkList.c
	gcc -c LinkList.c

