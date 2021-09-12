#include<malloc.h>
#include<pthread.h>

struct job
{
	struct job* next;
	int dato;
};
/*Lista enlazada para almacenar las tareas*/
struct job* job_queue;

void* thread_function(void* arg){
	/*Se procesa hasta que la lista quede vacia*/
	while(job_queue != NULL){
		struct job* next_job = job_queue; 
		job_queue = job_queue->next;
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

	pthread_create(&thread, NULL, &thread_function, NULL);
	pthread_join(thread, NULL);
	return 0;
}