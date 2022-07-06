#include<stdio.h>
int main()
{
	int a;
	double sum=0.0;
	int n=1; 
	for(a=1;a<=100;a++)
	{
		sum=sum+n*(1.0/a);
		n=-n;
	}
	printf("%f",sum);
	return 0;
 } 
