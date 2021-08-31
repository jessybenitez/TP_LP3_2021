#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* server_name=getenv("SERVER_NAME");
	if (server_name==NULL)
	{
		server_name="server.my-Company.com";
	}
	printf("accessing server %s\n", server_name);
	return 0;
}