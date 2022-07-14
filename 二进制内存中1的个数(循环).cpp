#include<stdio.h>
int main()
{
	int a;
	int count;
	scanf("%d",&a);
	while(a)
	{
		if(a%2==1)
			count++;             //存在局限性，负数不行
		a=a/2;
	}
	printf("%d",count);
	return 0;
}
