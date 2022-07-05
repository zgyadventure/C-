#include<stdio.h>
#include<math.h>
int main()
{
    int i;
	int j;
	int count;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
	if(j>sqrt(i))										//i=a*b,如果a能被整除，那么b也能被整除,所以我们只需要判断一半就行，小的那一半一定小于i的开平方 
	{
		printf("%d是素数\n",i);
		count++;
	}
	}
	printf("一共%d个",count);
	return 0;
}
