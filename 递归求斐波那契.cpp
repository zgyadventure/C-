#include<stdio.h>
int Fib(int n)
{
	if(n<=2)
	{
		return 1;
	}
	else
		return Fib(n-1)+Fib(n-2);
}
int main()
{
	int a;
	scanf("%d",&a);
	int ret=Fib(a);
	printf("%d",ret);
	return 0;
}
