#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d",&a,&b);
	while(c=a%b)
	{ 
		a=b;    						//while(a%b)表示while(a%b!=0) ,在C语言中很多时候能用到非0即为真，为0直接跳出循环，所以可以这样表示 
		b=c;							//while(c=a%b)表示把余数给c 
	}									 
	printf("%d",b);
	return 0;
	
}
