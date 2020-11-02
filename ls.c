#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include "clu.h"

int ls (char* path)
{
	struct dirent **list = NULL;
	int count = scandir(path, &list, NULL, alphasort);
	if(count < 0){
		perror("Couldn't open the directory");
		exit(1);
	} else {
		for (int i = 0; i < count; i++){
			puts(list[i]->d_name);
			free(list[i]);
			list[i] = NULL;
		}
	}
	free(list);
	list = NULL;
	return count;
}
