#include<stdio.h>
#include<assert.h>
char* my_strstr(char* arr1,char* arr2)
{
	assert(arr1!=NULL);
	assert(arr2!=NULL);
	if(*arr2=='\0')
	{
		return arr1;
	}
	while(*arr1!=*arr2)
	{
		arr1++;
	}
	while(*arr1=*arr2)
	{
		arr1++;
		arr2++;
			if(*arr2=='\0')
			{
				return arr1;
			}	
	}
	if(*arr2!='\0')
		return NULL;
	
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abf";
	char* ret=my_strstr(arr1,arr2);
	if(ret==NULL)
	{
		printf("no");
	}
	else
		printf("yes");
	return 0;
}
