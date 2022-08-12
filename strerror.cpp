#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* p=fopen("add.c","r");
	
	if(p==NULL)
	{
		printf("%s",strerror(errno));
	}
	else
		printf("open successfully");
	return 0;
}
