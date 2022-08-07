#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="bcdefa";
	strncat(arr1,arr1,6);
	char* ret=strstr(arr1,arr2);
	if(ret==NULL)
	{
		printf("no");
	}
	else
		printf("yes");
	return 0;
}
