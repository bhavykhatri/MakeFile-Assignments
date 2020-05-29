# CC is the standard variable to hold the command that invokes the C compiler.
CC = gcc

CFLAGS = -g -Wall -Werror


hello: main.o dohello.o
	$(CC) -o hello main.o dohello.o

dohello.o: dohello.c
	$(CC) -c  dohello.c  $(CFLAGS) -DDOHELLO=do_hello


main.o: main.c
	$(CC) -DMAIN -c main.c $(CFLAGS)

clean:
	rm -f hello *.o
