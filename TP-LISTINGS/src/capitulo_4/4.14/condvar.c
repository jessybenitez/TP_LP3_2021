#include <pthread.h>

int thread_flag;
pthread_cond_t thread_flag_cv;
pthread_mutex_t thread_flag_mutex;

void initialize_flag(){
	pthread_mutex_init(&thread_flag_mutex,NULL);
	pthread_cond_init(&thread_flag_cv,NULL);
	thread_flag=0;
}

void do_work(){
	/*COMPLETAR*/
}

void* thread_function(void* thread_arg){
	while(1){
		pthread_mutex_lock(&thread_flag_mutex);
		while(!thread_flag){
			pthread_cond_wait(&thread_flag_cv,&thread_flag_mutex);
		}
		pthread_mutex_unlock(&thread_flag_mutex);
		do_work();
	}
	return NULL;
}

void set_thread_flag(int flag_value){
	pthread_mutex_lock(&thread_flag_mutex);
	thread_flag=flag_value;
	pthread_mutex_unlock(&thread_flag_mutex);
}

int main()
{
	pthread_t thread;

	pthread_create(&thread,NULL,thread_function,NULL);
	return 0;
}