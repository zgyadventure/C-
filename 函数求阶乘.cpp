#include <stdio.h>
int jiechen(int n)
{
	int i;
	int b=1;
	for(i=2;i<=n;i++)
	{
		b=b*i;
	}
	return b;
}
int main()
{
	int a;
	scanf("%d",&a);
	int ret=jiechen(a);
	printf("%d",ret);
	return 0;
}
