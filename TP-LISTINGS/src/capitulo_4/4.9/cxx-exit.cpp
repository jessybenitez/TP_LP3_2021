#include<cstdio>
#include<iostream>
#include<unistd.h>
#include <pthread.h>
extern bool should_exit_thread_immediately(){return true;};

class ThreadExitException{
public:
	ThreadExitException(void* return_value)
		: thread_return_value_(return_value) {}

	void* DoThreadExit(){
		pthread_exit(thread_return_value_);
	}

private:
	void* thread_return_value_;
};

void do_some_work(){
	while(1){
		if(should_exit_thread_immediately()){
			throw ThreadExitException(/*thread's return value =*/NULL);
		}
	}
}


void* thread_function(void*){
	try{
		do_some_work();
	}
	catch(ThreadExitException ex){
		ex.DoThreadExit();
	}
	return NULL;
}

int main()
{
	pthread_t thread;
	pthread_create(&thread, NULL, &thread_function, NULL);
	pthread_join(thread, NULL);
	return 0;
}