#ifndef _GNU_SOURCE
# define _GNU_SOURCE
#endif
#include <stdio.h>
#include "nav.h"

int main(int argc, char** argv){

	char* dir_arg;

	if(argc == 1){

		dir_arg = pwd();

		puts(dir_arg);

	} else {

		dir_arg = argv[1];

	}

	int s = ls(dir_arg);

	printf("Total: %d\n", s);

	return 0;
}
