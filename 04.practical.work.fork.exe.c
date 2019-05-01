#include<stdio.h>
#include<unistd.h>
int main()
{
	int pid1 = fork();
	if (pid1 == 0)
	{
	printf("Launching ps -ef\n");
	char *args[]= { "bin/ps", "-ef", NULL};
	execvp("bin/ps", args);
	printf("Finished launching ps -ef");
	return 0;
	}
	
}