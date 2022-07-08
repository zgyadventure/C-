#include<stdio.h>
int prime(int n)
{
	int j;
	for(j=2;j<n;j++)
	{
		if(n%j==0)
		return 0;
	}
	return 1;
}
int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(prime(i)==1)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
