#include<stdio.h>
int main()
{
	int a=1999;
	int b=2299;
	int i;
	int count=0;
	for(i=0;i<32;i++)
	{
		if((((a>>i)&1)==1)&&(((b>>i)&1)==0)) 
		{
			count++;
		}
		else if((((a>>i)&1)==0)&&(((b>>i)&1)==1))
		{
			count++;
		}
	}
	printf("%d",count);
	
}
