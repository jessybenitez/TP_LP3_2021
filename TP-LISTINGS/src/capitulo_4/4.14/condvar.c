#include<pthread.h>
#include<stdio.h>
void do_work();
int thread_flag;
pthread_cond_t thread_flag_cv;
pthread_mutex_t thread_flag_mutex;

void initialize_flag(){
	pthread_mutex_init(&thread_flag_mutex, NULL);
	pthread_cond_init(&thread_flag_cv, NULL);
	thread_flag=0;
}

void do_work(){
	printf("El hilo recibe la señal que el valor cambio\n");
	set_thread_flag(0);
}

void* thread_function(void* thread_arg){
	void *ptr;
	while(1){
		pthread_mutex_lock(&thread_flag_mutex);
		while(!thread_flag){
			pthread_cond_wait(&thread_flag_cv, &thread_flag_mutex);
		}
		pthread_mutex_unlock(&thread_flag_mutex);
		do_work();
		pthread_exit(ptr);
	}
	return NULL;
}

void set_thread_flag(int flag_value){
	pthread_mutex_lock(&thread_flag_mutex);
	thread_flag = flag_value;
	pthread_cond_signal(&thread_flag_cv);
	pthread_mutex_unlock(&thread_flag_mutex);
}

int main()
{
	pthread_t thread;
	set_thread_flag(1);
	pthread_create(&thread, NULL, &thread_function, NULL);
	return 0;
}