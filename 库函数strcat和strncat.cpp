#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abc";
	char arr3[]="abc";
	strcat(arr2,arr3);
	strncat(arr1,arr1,6);
	printf("%s\n",arr1);
	printf("%s",arr2);
	return 0;
}
