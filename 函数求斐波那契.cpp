#include<stdio.h>
int Fib(int n)
{
	int a=1;
	int b=1;
	int c=1;
	while(n>2)
	{
		a=b;
		b=c;
		c=a+b;
		n--;	
	}
	return c;
}
int main()
{
	int r;
	scanf("%d",&r);
	int ret=Fib(r);
	printf("%d",ret);
	return 0;	
}
