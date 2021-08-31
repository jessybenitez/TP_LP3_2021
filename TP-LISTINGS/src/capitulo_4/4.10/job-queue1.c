/*FALTA COMPLETAR FUNCION PROCCES_JOB*/
#include <malloc.h>
#include <pthread.h>

struct job
{
	struct job* next;
};

struct job* job_queue;

void process_job(struct job* n){
	/*COMPLETAR*/
}

void* thread_function(void* arg){
	while(job_queue!=NULL){
		struct job* next_job=job_queue;
		job_queue=job_queue->next;
		process_job(next_job);
		free(next_job);
	}
	return NULL;
}



int main(int argc, char const *argv[])
{
	pthread_t thread;

	pthread_create(&thread,NULL,thread_function,NULL);
	return 0;
}