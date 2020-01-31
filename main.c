#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include "nav.h"
int main(void){
	char* c = pwd();
	puts(c);
	int s = ls();
	printf("%d\n", s);
	return 0;
}
