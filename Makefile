CC=gcc

prog: task1.c task2.c
	$(CC) task1.c -o task1
	$(CC) task2.c -o task2

clean:
	rm -rf *.o task1 task2

