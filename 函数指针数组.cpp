#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int Mul(int x,int y)
{
	return x*y;
}

int main()
{
	int a=2;
	int b=3;
	int i;
	int* arr[10];
	int (*p[2])(int,int)={Add,Mul};
	for(i=0;i<2;i++)
	{
		printf("%d\n",p[i](2,3));
	}
	return 0;
}
