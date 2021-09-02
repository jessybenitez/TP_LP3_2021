/*FALTA FUNCION MAIN*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

union semun{
	int val;
	struct semid_ds *buf;
	unsigned short int *array;
	struct seminfo *__buf;
};

int binary_semaphore_initialize(int semid){
	union semun argument;
	unsigned short values[1];
	values[0]=1;
	argument.array=values;
	return semctl(semid,0,SETALL,argument);
}

int main(){
	/*completar*/
	return 0;
}