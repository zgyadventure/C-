#include<stdio.h>
int main() 
{
	int a;
	int i;
	scanf("%d",&a);
	for(i=30;i>=0;i-=2)
	{
		printf("%d",(a>>i)&1);
	}
	printf("\n");
	for(i=31;i>=1;i-=2)
	{
		printf("%d",(a>>i)&1);
	}
	return 0;
}
