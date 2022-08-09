#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="acf";
	if(strcmp(arr1,arr2)==0)
	{
		printf("arr1=arr2");
	}
	else
	printf("no");
	return 0;
}
