#include <stdio.h>
int Add(int x,int y)
{

	int z;
	z=x+y;
	return z;
}

int main()
{
	int a=10;
	int b=20;
	int sum=Add(a,b);
	printf("%d",sum);
	return 0;
}
