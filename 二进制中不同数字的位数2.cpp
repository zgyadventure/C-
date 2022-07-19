#include<stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d%d",&a,&b);
	int c;
	int count=0;
	c=a^b;
	while(c)
	{
		c=c&(c-1);
		count++;
	}
	printf("%d",count);
	
}
