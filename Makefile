CC=gcc
CFLAGS=-g -Wall
all: fopen
all: size

fopen: fopen.c
	$(CC) $(CFLAGS) fopen.c -o fopen
size: size.c
	$(CC) $(CFLAGS) size.c -o size

clean:
	rm fopen write_test.txt size
