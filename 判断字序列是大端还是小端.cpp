#include<stdio.h>
int test()
{
	int a=1;
	char* p=(char*)&a;
	if(*p==1)
	{
		return 1;
	}
	else
	return 0;
}
int main()
{
	int b;
	b=test();
	if(b==1)
	{
		printf("Ğ¡¶Ë");
	}
	else
	printf("´ó¶Ë");
	return 0;
}
