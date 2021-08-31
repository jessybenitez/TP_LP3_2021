#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

sig_atomic_t child_exit_status;

void clean_up_child_process(int signal_number){
	int status;
	wait(&status);
	child_exit_status=status;
}

int main(int argc, char const *argv[])
{
	struct sigaction sigchld_action;
	memset(&sigchld_action,0,sizeof(sigchld_action));
	sigchld_action.sa_handler=&clean_up_child_process;
	sigaction(SIGCHLD,&sigchld_action,NULL);
	
	return 0;
}