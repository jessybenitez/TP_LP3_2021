#include<stdio.h>
#include<ctype.h>

int main()
{
	int c,x,y,z;
	printf("introduzca el valor de c,x,y,z");
	scanf("%d%d%d%d",&c,&x,&y,&z);
	/*ejercicio 8.1 a*/
	c=toupper(c);
	/*ejercicio 8.1 b*/
	printf(isdigit(c)?"es un digito\n":"no es un digito\n");
	printf("el valor contenido en c es\n %c",&c);
	/*ejercicio 8.1 c*/
	printf("la conversion es\n");
	printf("%d",atol("1234567"));
	double d,e,f;
	printf("introduzca el valor de d,e,f");
	scanf("%f%f%f",&d,&e,&f);
	char *ptr;
	printf("introduzca la cadena");
	scanf("%s",&ptr);
	char s1[100];
	printf("cargue el arreglo s1");
	scanf("%s",s1);
	char s2[100];
	printf("cargue el arreglo s2");
	scanf("%s",s2);
		
	return 0;
}
