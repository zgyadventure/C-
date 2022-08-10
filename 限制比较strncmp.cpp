#include<stdio.h>
#include<string.h>
int main()
{
	const char* p1="abcdef";
	const char* p2="abcd";
	if(strncmp(p1,p2,3)==0)
	{
		printf("p1=p2");
	}
	else
		printf("no");
	return 0;
}
