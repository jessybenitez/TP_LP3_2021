/*FALTA COMPLETAR FUNCION PROCCES_JOB*/
#include <malloc.h>
#include <pthread.h>

struct job
{
	struct job* next;
	int dato;
};
/*lista enlazada para almacenar las tareas*/
struct job* job_queue;
/*mutex para proteger la verificacion de tareas*/
pthread_mutex_t job_queue_mutex=PTHREAD_MUTEX_INITIALIZER;

/*funcion para verificar la cola hasta que ya no existan tareas*/
void* thread_function(void* arg){
	while(1){
		struct job* next_job;
		/*se bloquea mutex para verficar la cola de tareas*/
		pthread_mutex_lock(&job_queue_mutex);
		if(job_queue==NULL){
			next_job=NULL;
		}else{
			next_job=job_queue;
			job_queue=job_queue->next;
		}
		/*se libera el mutex*/
		pthread_mutex_unlock(&job_queue_mutex);
		/*finalizacion del proceso si la cola ya esta vacia*/
		if (next_job==NULL)
		{
			break;
		}
		/*si la cola no esta vacia se continua procesando*/
		printf("Procesando el dato %d\n", next_job->dato);
		free(next_job);
	}
	return NULL;
}



int main(int argc, char const *argv[])
{
	pthread_t thread;
	for(int i = 0; i < 15; i++){
		struct job *x = (struct job*) malloc(sizeof(struct job));
		x->dato = i;
		x->next = job_queue;
		job_queue = x;
	}

	pthread_create(&thread,NULL,&thread_function,NULL);
	pthread_join(thread, NULL);
	return 0;
}