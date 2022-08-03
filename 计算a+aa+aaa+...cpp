#include<stdio.h>
#include<math.h>
int test(int a,int n)
{
	int b=a;
	int sum=0;
	while(b<pow(10,n))
	{
		sum=sum+b;
		b=b*10+a;
	}
	return sum;
}
int main()
{
	int a;
	int n;
	scanf("%d%d",&a,&n);
	printf("%d",test(a,n));
}
