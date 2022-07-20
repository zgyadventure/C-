#include<stdio.h>
void test(int a)
{
	if(a>9)
	{
		test (a/10);
	}
	printf("%d ",a%10);
}
int main()
{
	int a;
	scanf("%d",&a);
	test(a);
	return 0;
}
