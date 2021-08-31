#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	printf("El id del proceso es %d\n", (int)getpid());
	printf("El id del proceso padre es %d\n", (int)getppid());
	return 0;
}