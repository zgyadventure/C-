#include<stdio.h>
int count=0;
void Hnt(int r,char a,char b,char c)
{
	if(r==1)
	{
		printf("%c->%c ",a,c);
		count++;
	}
	else
	{
		Hnt(r-1,a,c,b);
		printf("%c->%c ",a,c);
		Hnt(r-1,b,a,c);
		count++;
	}
	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	Hnt(n,'a','b','c');
	printf("%d",count);
	return 0;
}
