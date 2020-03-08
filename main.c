#ifndef _GNU_SOURCE
# define _GNU_SOURCE
#endif
#include <stdio.h>
#include "nav.h"

void list (char* dir_arg);

int main (int argc, char** argv) {

	char* dir_arg;

	switch (argc) {

		case 2:
			dir_arg = argv[1];
			list(dir_arg);
			break;
		case 3:
			if (argv[1][0] == 'r')
				cat(argv[2]);
			break;
		default:
			dir_arg = pwd();
			list(dir_arg);
			break;
	}
	return 0;
}

void list (char* dir_arg)
{
	puts(dir_arg);

	int s = ls(dir_arg);

	printf("%d\n", s);

	return;
}
