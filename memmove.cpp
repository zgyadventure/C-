#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcd";
	memmove(arr1+2,arr1,sizeof(arr2));
	printf("%s",arr1);
	return 0;
}
