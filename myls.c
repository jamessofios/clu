#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include "nav.h"
int ls(char* path){
	DIR *dp;
	if(path != NULL) dp = opendir(path);
	else dp = opendir("./");
	int counter = 0;
	if(dp != NULL)
	{
		struct dirent *ep;

		while( ( ep = readdir(dp) ) ){
			puts(ep->d_name);
			//printf("%s ", ep->d_name);
			counter++;
		}
		//putchar('\n');
		(void)closedir(dp);
	}
	else
	{
		perror("Could not open directory");
	}
	return counter;
}
