#include<stdio.h>
int my_strcmp(const char* arr1,const char* arr2)
{
	while(*arr1==*arr2)
	{
		if(*arr1=='\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if(*arr1>*arr2)
	{
		return 1;
	}
	else
		return -1;
}
int main()
{
	char* p1="abcdef";
	char* p2="acq";										//比较对应字符大小			
	int ret=my_strcmp(p1,p2);
	if(ret==0)
	{
		printf("p1=p2");
	}
	else if(ret==1)
	{
		printf("p1>p2");
	}
	else
		printf("p1<p2");
	return 0;
}
