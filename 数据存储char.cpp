#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int i;
	for(i=0;i<1000;i++)
	{
		a[i]=-1-i;				//charȡֵΪ-128~127,����i-129ת��Ϊ127��Ȼ��126��ֱ��0��ȡ\0����strlen 
	}
	printf("%d",strlen(a));
	return 0;
}
