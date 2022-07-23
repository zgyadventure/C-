#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int i;
	for(i=0;i<1000;i++)
	{
		a[i]=-1-i;				//char取值为-128~127,这里i-129转换为127，然后126，直到0获取\0结束strlen 
	}
	printf("%d",strlen(a));
	return 0;
}
