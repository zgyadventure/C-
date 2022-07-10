#include<stdio.h>
int Frog(int n)
{
	if((n==1)||(n==2))
	{
		return n;
	}
	else
	    return  Frog(n-1)+Frog(n-2);
}
int main()
{
	int a;
	scanf("%d",&a);
	int ret=Frog(a);
	printf("%d",ret);
	return 0;
}
