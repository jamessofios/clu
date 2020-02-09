#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include "nav.h"
int main(void){
	char* c = pwd();
	puts("____");
	puts(c);
	puts("____");
	int s = ls();
	puts("____");
	printf("Total: %d\n", s);
	return 0;
}
