#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	int fd;
	char pathname[] = "temp.txt";
	
	if((fd=open(pathname, O_CREAT |  O_RDWR, 0644))== -1)
	{
		printf("Error!!\n");
		exit(1);
	}

	close(fd);
}

