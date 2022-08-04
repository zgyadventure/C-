#include<stdio.h>
int main()
{
	int money=0;
	int total=0;
	int empty=0;
	scanf("%d",&money);
	total=money;
	empty=money;
	if(money==0)
	{
		total=0;
	}
	else
	{
	while(empty>=2)
	{
		total=total+empty/2;
		empty=empty/2+empty%2;
	}
	}
	printf("%d",total);
	return 0;
}
