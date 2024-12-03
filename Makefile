CC=tcc
CFLAGS=-g -Wall
CLANG=clang
all: fopen
all: size
all: file


fopen: fopen.c
	$(CC) $(CFLAGS) fopen.c -o fopen

size: size.c
	$(CC) $(CFLAGS) size.c -o size

file: file.c
	$(CLANG) $(CFLAGS) file.c -o file

clean:
	rm fopen write_test.txt size file
