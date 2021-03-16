#include <stdio.h>
#include <string.h>
#include "clu.h"

int main (int argc, char** argv)
{
	if(argc == 1 || !strcmp(argv[1], "pwd")){

		puts(pwd());

	} else if (!strcmp(argv[1], "ls")) {

		unsigned int count = 0;

		if (argc == 2) {

			puts(pwd());
			count = ls(pwd());
			printf("Total: %d\n", count);

		} else {

			for (int i = 2; i < argc; i++) {

				puts(argv[i]);
				count = ls(argv[i]);
				printf("Total: %d\n", count);
			}
		}

	} else if (!strcmp(argv[1], "cat")) {

		for (int i = 2; i < argc; i++) {

			cat(argv[i]);

		}

	} else if (!strcmp(argv[1], "rm")) {

		for (int i = 2; i < argc; i++) {

			remove(argv[i]);
		}
	} else if (!strcmp(argv[1], "rename")) {
		rename(argv[2], argv[3]);
	}

	return 0;
}
