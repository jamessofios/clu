#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "nav.h"

char* pwd(void)
{
	char cwd[PATH_MAX];
	if(getcwd(cwd, sizeof(cwd)) != NULL){
		return getcwd(cwd, sizeof(cwd));
	} else {
		perror("getcwd() error");
		exit(1);
	}
}
