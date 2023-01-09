#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file_to_read = fopen("read_test.txt","r");
	FILE *file_to_write = fopen("write_test.txt","w");

	if (file_to_read == NULL || file_to_write == NULL) {
		printf("no input file!\n");
		return -1;
	}

	char c;
	while ((c=fgetc(file_to_read)) != EOF) {
		if (c == '_') {
			c = '.';
		}
		fputc(c, file_to_write);
	}

	fclose(file_to_read);
	fclose(file_to_write);
}
