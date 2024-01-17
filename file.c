#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("usage: %s [file]\n",argv[0]);
		return EXIT_FAILURE;
	}

	char *fileName = argv[1];

	FILE *fp = fopen(fileName, "rb");
	if (fp == NULL) {
		perror("fopen error...\n");
		exit(EXIT_FAILURE);
	}

	const int MAGIC_BYTES = 3;
	char magNumb[MAGIC_BYTES] = {0};
	char expNumbBz2[MAGIC_BYTES] = {0x42, 0x5A, 0x68};

	int numRead = fread(magNumb, 1, MAGIC_BYTES, fp);
		if (numRead != MAGIC_BYTES) {
			printf("numRead error...\n");
			exit(EXIT_FAILURE);
		}

	if (memcmp(magNumb, expNumbBz2, MAGIC_BYTES) == 0) {
		printf("the file is bz2\n");
	} else {
		printf("the file us not bz2\n");
	}
}
