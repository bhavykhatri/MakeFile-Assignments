
CC = gcc

CFLAGS = -g -Wall -Werror -std=gnu99

all: talk

#executable
talk: shout.o main.o speak.o
	$(CC) $(CFLAGS) -o talk main.o shout.o speak.o

#Individual source files
shout.o: shout.c shout.h speak.h
	$(CC) $(CFLAGS) -c shout.c

speak.o: speak.c speak.h
	$(CC) $(CFLAGS) -c speak.c

main.o: speak.h shout.h main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o talk
