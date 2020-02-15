#ifndef _GNU_SOURCE
# define _GNU_SOURCE
#endif
#include <stdio.h>
#include "nav.h"

int main(int argc, char** argv){

	char* dir_arg;

	if (argc == 1) {

		dir_arg = pwd();

	} else {

		dir_arg = argv[1];

	}

	puts(dir_arg);

	int s = ls(dir_arg);

	printf("%d\n", s);

	return 0;
}
