/*FALTA  FUNCION MAIN*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
int binary_semaphore_wait(int semid){
	struct sembuf operations[1];
	operations[0].sem_num=0;
	operations[0].sem_op=-1;
	operations[0].sem_flg=SEM_UNDO;
	return semop(semid,operations,1);
}

int binary_semaphore_post(int semid){
	struct sembuf operations[1];
	operations[0].sem_num=0;
	operations[0].sem_op=-1;
	operations[0].sem_flg=SEM_UNDO;
	return semop(semid,operations,1);
}

int main(){
	/*completar*/
	return 0;
}