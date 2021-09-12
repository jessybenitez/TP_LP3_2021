#include<pthread.h>
#include<stdio.h>
int thread_flag;
void set_thread_flag(int flag_value);
pthread_mutex_t thread_flag_mutex;

void initialize_flag(){
	pthread_mutex_init(&thread_flag_mutex,NULL);
	thread_flag=0;
}


void* thread_function(void* thread_arg){
	void *ptr;
	while(1){
		int flag_is_set;
		/*se bloquea la bandera*/
		pthread_mutex_lock(&thread_flag_mutex);
		flag_is_set=thread_flag;
		/*Se libera la bandera*/
		pthread_mutex_unlock(&thread_flag_mutex);
		if(flag_is_set){
			printf("Bandera positiva, el hilo realiza el trabajo\n");
			set_thread_flag(0);
			pthread_exit(ptr);
		}
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
	set_thread_flag(1);
	pthread_create(&thread, NULL, &thread_function, NULL);
	pthread_join(thread, NULL);
	return 0;
}