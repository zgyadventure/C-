#include<Stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(b>c))
	{
		printf("a>b>c");
	}
	else if((a>b)&&(b<c)&&(a>c))
	{		
			printf("a>c>b");
	}
	else if((a>b)&&(b<c)&&(a<c))
	{
		printf("c>a>b");
	}
	else if((a<b)&&(a>c))
	{
		printf("b>a>c");
	}
	else if((a<b)&&(a<c)&&(b>c))
	{
		printf("b>c>a");
	}
	else if ((a<b) && (a<c) && (b<c))
	{
		printf("c>b>a");
	}
	return 0;
	
	
		
	
	
	
}
