#include<stdio.h>
int main()
{
    int i;
	int j;
	int count;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
	if(i==j)											//跳出内循环的情况有2种，一种是被整除了跳出不是素数，还有一种是不能被整除循环结束跳出，是素数，这时i=j 
	{
		printf("%d是素数\n",i);
		count++;
	}
	}
	printf("一共%d个",count);
	return 0;
}
