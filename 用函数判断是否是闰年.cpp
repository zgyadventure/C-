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
		printf("������");
	}
	else
	printf("��������");
	return 0;
}
