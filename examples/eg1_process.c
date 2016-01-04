#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{
	int pid = fork();
	if(pid > 0)
	{
		printf("parent: chid = %d\n",pid);
		pid = wait();
		printf("chid %d is done\n", pid);
	}
	else if (pid == 0)
	{
		printf("chid exiting\n");
		exit(0);
	}
	else
	{
		printf("fork error\n");
	}

	return 0;
}
