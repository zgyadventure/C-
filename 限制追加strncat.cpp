#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdef\0xxxxxxxxxx";
	char arr2[]="zhang";
	strncat(arr1,arr2,3);
	printf("%s",arr1);
	return 0;
}
