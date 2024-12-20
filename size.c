#include <stdio.h>
#include <stdlib.h>

long size(char *filename) {
	FILE *f = fopen(filename, "r");
	if (f == NULL) {
		return 1;
	}
	if (fseek(f, 0, SEEK_END) < 0) {
		fclose(f);
		return 1;
	}
	long lenght = ftell(f);
	fclose(f);
	return lenght;
}

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("usage: %s <filename>\n", argv[0]);
		return EXIT_FAILURE;
	}
	char *filename = argv[1];
	printf("%s:\t%ld\n", filename, size(filename));
	return EXIT_SUCCESS;
}
