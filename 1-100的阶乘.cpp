#include <stdio.h>
int main()
{
	int i=0;
	int sum=1;
	int n;
	scanf("%d",&n);								//如果n过大会超过2的32次方，结果为0，也可能为负值 
	for(i=2;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
}
