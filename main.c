#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include "nav.h"
int main(int argc, char** argv){
	char*c;
	if(argc == 1){
		c = pwd();
	}else{
		c = argv[1];
	}
	//puts("____");
	puts(c);
	//puts("____");
	int s = ls(c);
	//puts("____");
	printf("Total: %d\n", s);
	return 0;
}
