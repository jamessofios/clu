#include <stdio.h>
#include <stdlib.h>
#include "clu.h"

void cat (char* file_name)
{
	FILE *fptr;
	char c;
	fptr = fopen(file_name, "r");
	if (fptr == NULL) {
		perror("Cannot open file!\n");
		exit(1);
	}
	c = fgetc(fptr);
	while (!feof(fptr)){
		printf("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
	fptr = NULL;
}
