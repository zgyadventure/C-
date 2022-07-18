#include<stdio.h>
int main()
{
	int a;
	int count=0;
	int i;
	scanf("%d",&a);
	while(a)
	{
		a=a & (a-1);
		count++;
	}
	printf("%d",count);
	return 0;
	
}
