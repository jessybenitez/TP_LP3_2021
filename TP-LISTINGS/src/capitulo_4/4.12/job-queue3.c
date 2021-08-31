/*FALTA COMPLETAR FUNCION PROCCES_JOB*/
#include <malloc.h>
#include <pthread.h>
#include <semaphore.h>

struct job
{
	struct job* next;
};

struct job* job_queue;
pthread_mutex_t job_queue_mutex=PTHREAD_MUTEX_INITIALIZER;
sem_t job_queue_count;

void initialize_job_queue(){
	job_queue=NULL;
	sem_init(&job_queue_count,0,0);
}
void process_job(struct job* n){
	/*COMPLETAR*/
}

void* thread_function(void* arg){
	while(1){
		struct job* next_job;
		sem_wait(&job_queue_count);
		pthread_mutex_lock(&job_queue_mutex);
		next_job=job_queue;
		job_queue=job_queue->next;
		pthread_mutex_unlock(&job_queue_mutex);
		process_job(next_job);
		free(next_job);
	}
	return NULL;
}



int main()
{
	pthread_t thread;

	pthread_create(&thread,NULL,thread_function,NULL);
	return 0;
}