#include <malloc.h>
#include <pthread.h>

void* allocate_buffer(size_t size){
	return malloc(size);
}

void deallocate_buffer(void* buffer){
	free(buffer);
}

void* do_some_work(){
	void* temp_buffer=allocate_buffer(1024);
	pthread_cleanup_push(deallocate_buffer,temp_buffer);
	int k = 0;
	printf("Hilo trabajando...\n");
	for(int i = 0; i < 1000; i++)
		k++;
	printf("funcion terminada.\n");
	pthread_cleanup_pop(1);
}

int main()
{
	pthread_t thread;
	pthread_create(&thread, NULL, &do_some_work, NULL);
	pthread_join(thread, NULL);
	return 0;
}