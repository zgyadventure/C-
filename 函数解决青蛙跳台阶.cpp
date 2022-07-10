#include<Stdio.h>
int Frog(int n)
{
	int a=1;
	int b=2;
	int c=0;
	if(n==1||n==2)
	{
		return n;
	}
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;

	
	
}
int main()
{
	int a;
	scanf("%d",&a);
	int ret=Frog(a);
	printf("%d",ret);
	return 0;
}
