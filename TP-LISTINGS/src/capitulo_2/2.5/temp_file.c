#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>
typedef int temp_file_handle;

temp_file_handle write_temp_file(char* buffer, size_t length){

	char temp_filename[]= "/tmp/temp_file.XXXXXX";
	int fd= mkstemp(temp_filename);

	unlink(temp_filename);
	write(fd,&length,sizeof(length));
	write(fd,buffer,length);
	return fd;
}

char* read_temp_file(temp_file_handle temp_file, size_t* length){
	char* buffer;
	int fd=temp_file;
	lseek(fd,0,SEEK_SET);
	read(fd,length,sizeof(*length));
	buffer=(char*)malloc(*length);
	read(fd,buffer,*length);
	close(fd);
	return buffer;
}

int main(){
	size_t N=3;
	temp_file_handle temp=1;
	char *buff;
	buff=NULL;
	buff=malloc(4);
	write_temp_file(buff,N);
	read_temp_file(temp,&N);
	return 0;
}