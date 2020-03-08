#include <stdio.h>
#include <stdlib.h>
#include "nav.h"

void cat (char* file_name)
{
	FILE *fptr;

	char c;

	// Open file
	fptr = fopen(file_name, "r");

	if (fptr == NULL) {
		printf("Cannot open file \n");
		exit(1);
	}

	// Read contents from file
	c = fgetc(fptr);

	while (c != EOF){
		printf ("%c", c);
		c = fgetc(fptr);
	}

	fclose(fptr);

	return;
}
