#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>


int main()
{
	char *argv[3];
	argv[1] = "hello!";
	argv[2] = 0;
	exec("/bin/echo",argv);
	printf("exec run error!\n");
	return 0;
}
