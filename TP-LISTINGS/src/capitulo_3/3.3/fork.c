#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t child_pid;
	printf("el ID del proceso del programa principal es %d \n", (int) getpid());
	child_pid=fork();
	if (child_pid!=0)
	{
		printf("este es el proceso padre con id %d \n",(int) getpid());
		printf("el ID del proceso hijo es %d \n", (int)child_pid);
	}
	else{
		printf("este es el proceso hijo con id %d \n", (int)getpid() );
	}
	return 0;
}