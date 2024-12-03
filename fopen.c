#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *r = fopen("read_test.txt","r");
	FILE *w = fopen("write_test.txt","w");
	if (r == NULL || w == NULL) {
		printf("no input file!\n");
		return 1;
	}
	char c;
	while ((c=fgetc(r)) != EOF) {
		if (c == '_') {
			c = '.';
		}
		fputc(c, w);
	}
	fclose(r);
	fclose(w);
	return 0;
}
