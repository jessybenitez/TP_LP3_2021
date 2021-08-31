#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int spawn(char* program, char** arg_list){
	
	pid_t child_pid;
	child_pid=fork();
	if (child_pid!=0)
	{
		return child_pid;
	}else{
		execvp(program,arg_list);
		fprintf(stderr, "ocurrio un error en execvp \n");
		abort();
	}
}

int main()
{
	int child_status;
	char* arg_list[]={
		"ls",
		"-1",
		"/",
		NULL
	};

	spawn("ls", arg_list);
	wait(&child_status);
	if(WIFEXITED(child_status))
		printf("el proceso hijo salio normalmente, con el codigo de salida %d\n", WEXITSTATUS(child_status));
	else
		printf("el proceso hijo salio anormalmente\n");
	//printf("hecho con el programa principal \n");
	return 0;
}