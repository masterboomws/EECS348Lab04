CC=gcc

all: prog1 prog2

prog1: task1.c
	$(CC) task1.c -o task1

prog2: task2.c
	$(CC) task2.c -o task2

clean:
	rm -rf *.o task1 task2

