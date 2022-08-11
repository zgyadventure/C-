#include<stdio.h>
#include<assert.h>
char* my_strstr(char* arr1,char* arr2)
{
	assert(arr1!=NULL);
	assert(arr2!=NULL);
	char* s1=arr1;
	char* s2=arr2;
	char* cur=arr1;
	if(*arr2=='\0')
	{
		return arr1;
	}
	while(*cur)
	{
		s1=cur;
		s2=arr2;
		while((*s1==*s2)&&(*s1!='\0')&&(*s2!='\0'))
		{
			s1++;
			s2++;
		}
		if(*s2=='\0')
		{
			return cur;	
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abc";
	char* ret=my_strstr(arr1,arr2);
	if(ret==NULL)
	{
		printf("no");
	}
	else
		printf("yes");
	return 0;
}
