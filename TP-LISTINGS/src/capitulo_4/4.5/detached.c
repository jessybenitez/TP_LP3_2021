//FALTA COMPLETAR
#include <pthread.h>

void* thread_function(void* thread_arg){
	int candidate=2;
	int n= *((int*) thread_arg);

	while(1){
		int factor;
		int is_prime=1;
		for(factor=2; factor<candidate;++factor){
			if (candidate % factor ==0)
			{
				is_prime=0;
				break;
			}
			if(is_prime){
				if (--n == 0){
					return (void*) candidate;
				}
			}
		}
		++candidate;
	}
	return NULL;
}

int main()
{
	pthread_attr_t attr;
	pthread_t thread;

	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);
	pthread_create(&thread,&attr,&thread_function,NULL);
	pthread_attr_destroy(&attr);


	return 0;
}