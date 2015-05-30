#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main(int argc, char *argv[])
{
	DIR *dp;
	struct dirent *dir;
	char *path = ".";

	if((dp = opendir(path)) == NULL){
		perror("Can't open directory");
		exit(1);
}

while((dir = readdir(dp)) != NULL){
	if(dir->d_ino == 0) {
		continue;
	}
	(void)printf("%s\n", dir->d_name);
}
(void)closedir(dp);

exit(0);
}
