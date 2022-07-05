#include<stdio.h>
#include<math.h>
int main()
{
    int i;
	int j;
	int count;
	for(i=101;i<=200;i+=2)
	{
		for(j=2;j<sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
	if(j>sqrt(i))										//偶数一定为素数，这里继续优化代码 
	{
		printf("%d是素数\n",i);
		count++;
	}
	}
	printf("一共%d个",count);
	return 0;
}
