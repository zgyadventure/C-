#include <stdio.h>
int main()
{
	int i;
	int ret=1;
	int sum=0;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ret=ret*i;
		sum=sum+ret;							 
		
	}
	printf("%d",sum);
	return 0;
}
