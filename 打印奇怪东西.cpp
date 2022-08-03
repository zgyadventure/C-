#include<stdio.h>
void test1(int line)
{
	int i;
	int j;
	int a=line;
	int q;
	for(i=1;i<=line;i++)
	{
		for(j=0;j<a;j++)
		{
			printf(" ");
		}
		for(q=1;q<=2*i-1;q++)
		{
			printf("*");
		}
		a--;
		printf("\n");
	}
}
void test2(int line)
{
	int i;
	int j;
	int a=line-1;
	int q;
	for(i=1;i<=line-1;i++)
	{
		for(q=0;q<=i;q++)
		{
			printf(" ");
		}
		for(j=1;j<=2*a-1;j++)
		{
			printf("*");
		}
		a--;
		printf("\n");
	}

}
int main()
{
	int line;
	scanf("%d",&line);
	test1(line);
	test2(line);
	return 0;
}
