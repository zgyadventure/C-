#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abc@def.com";
	const char* p="@.";
	char* ret;
	for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s ",ret);
	}
	return 0;
}
