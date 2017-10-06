#include  <stdio.h>
#include  <sys/types.h>

#define  MAX_COUNT  200

void ChildProcess(void);	/* child process prototype */
void ParentProcess(void);	/* parent process prototype*/

void main(void)
{	
	pid_t pid;
	pid=fork();
	if (pid==0)
		ChildProcess();
	else
		ParentProcess();
}

void ChildProcess(void)
{
	printf(" This line is from child, value = %d\n", getpid());
	printf("  ***Child process is done***\n");
}

void ParentProcess(void)
{
	printf("This line is from parent, value = %d\n",getpid());
	printf("***Parentprocess is done ***\n");
}
