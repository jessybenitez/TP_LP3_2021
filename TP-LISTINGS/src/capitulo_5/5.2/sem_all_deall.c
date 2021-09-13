/*FALTA FUNCION MAIN*/
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <stdio.h>

union semun{
	int val;
	struct semid_ds *buf;
	unsigned short int *array;
	struct seminfo *__buf;
};

int binary_semaphore_allocation(key_t key,int sem_flags){
	return semget(key,1,sem_flags);
}

int binary_semaphore_deallocate(int semid){
	union semun ignored_argument;
	return semctl(semid,1,IPC_RMID,ignored_argument);
}

int main(){
	
	key_t key;
	int k = binary_semaphore_allocation(key, 1);
	printf("El id del semáforo es: %d\n", k);
	binary_semaphore_deallocate(k);
	return 0;	
}