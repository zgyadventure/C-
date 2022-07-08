#include<stdio.h>
int runnian(int a)
{
	if((a%4==0)&&(a%100!=0)||(a%400==0)) 
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int year;
	scanf("%d",&year);
	if(1==runnian(year))
	{
		printf("是闰年");
	}
	else
	printf("不是闰年");
	return 0;
}
