#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("el nombre de este programa es '%s'.\n", argv[0]);
	printf("este programa fue invocado por %d argumentos. \n",argc -1);
	if (argc>1)
	{
		int i;
		printf("los argumentos son: \n");
		for(i=1;i<argc;++i){
			printf("%s\n", argv[i]);
		}
	}
	return 0;
}