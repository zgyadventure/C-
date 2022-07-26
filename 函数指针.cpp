#include<stdio.h>
int test(int x,int y)
{
	int a=x+y;
	return a;
}
int main()
{
	int a=2;
	int b=3;
	int (*p)(int,int)=test;
	printf("%d\n",(*p)(a,b));
	printf("%d",p(a,b));
	return 0;
}
