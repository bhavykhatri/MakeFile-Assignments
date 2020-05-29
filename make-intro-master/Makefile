# CC is the standard variable to hold the command that invokes the C compiler.
CC = gcc

hello: main.o dohello.o
	$(CC) -o hello main.o dohello.o

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

clean:
	rm -f hello *.o
