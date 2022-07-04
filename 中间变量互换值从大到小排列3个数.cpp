#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int tem;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		tem=a;
		a=b;
		b=tem;
	}
	if(a<c)
	{
	    tem=a;
		a=c;
		c=tem;	
	}
	if(b<c)
	{
		tem=b;
		b=c;
		c=tem;
	}
	printf("%d%d%d",a,b,c);
	return 0;
}
