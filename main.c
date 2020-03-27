#include <stdio.h>
#include "nav.h"
#include <string.h>
int main (int argc, char** argv)
{
	int s = 0;
	switch (argc) {
		case 2:
			puts(argv[1]);
			s = ls(argv[1]);
			printf("Total: %d\n",s);
			break;
		case 3:
			if (argv[1][0] == 'r') {
				cat(argv[2]);
			}
			break;
		default:
			puts(pwd());
			s = ls(pwd());
			printf("Total: %d\n", s);
			break;
	}
	return 0;
}
