CC=gcc
all: fopen
fopen: fopen.c
	gcc -o fopen fopen.c
clean:
	rm fopen write_test.txt
