/*FALTA COMPLETAR FUNCION PROCCES_JOB*/
#include <malloc.h>
#include <pthread.h>
#include <semaphore.h>

struct job
{
	struct job* next;
	int dato;
};

struct job* job_queue;
pthread_mutex_t job_queue_mutex = PTHREAD_MUTEX_INITIALIZER;
sem_t job_queue_count;

void initialize_job_queue(){
	job_queue=NULL;
	sem_init(&job_queue_count,0,0);
}


void* thread_function(void* arg){
	while(1){
		struct job* next_job;
		/*con el semaforo se verifica si la cola no esta vacia*/
		sem_wait(&job_queue_count);
		pthread_mutex_lock(&job_queue_mutex);
		next_job=job_queue;
		job_queue=job_queue->next;
		pthread_mutex_unlock(&job_queue_mutex);
		printf("Procesando el dato %d\n", next_job->dato);
		free(next_job);
	}
	return NULL;
}

void enqueue_job(int x){
	struct job* new_job;
	new_job = (struct job*) malloc (sizeof (struct job));
	new_job->dato = x;
	/*se bloquea el mutex antes de acceder a la cola*/
	pthread_mutex_lock (&job_queue_mutex);
	new_job->next = job_queue;
	job_queue = new_job;
	/*si hay hilos esperando en el semáforo uno se desbloqueará y tomará la tarea*/
	sem_post (&job_queue_count);
	/*liberamos el mutex*/
	pthread_mutex_unlock (&job_queue_mutex);
}
void* thread_function2(void* arg){
	for(int i = 0; i < 10; i++){
		enqueue_job(i);
	}
}

int main()
{
	pthread_t thread;
	pthread_t thread2;
	pthread_create(&thread2, NULL, &thread_function2, NULL);
	pthread_join(thread2, NULL);
	pthread_create(&thread, NULL, &thread_function, NULL);
	printf("Presione ctrl + c para finalizar la ejecucion\n");
	pthread_join(thread, NULL);
	return 0;
}