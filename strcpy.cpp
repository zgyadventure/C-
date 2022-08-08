#include<stdio.h>
char* my_strcpy(char* arr1,char* arr2)   //strcpy·µ»ØµÄÊÇchar* 
{
	while(*arr2!='\0')
	{
		*arr1=*arr2;
		arr1++;
		arr2++;
	}
	return arr1;
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="zhang";
	my_strcpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
}
