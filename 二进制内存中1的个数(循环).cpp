#include<stdio.h>
int main()
{
	int a;
	int count;
	scanf("%d",&a);
	while(a)
	{
		if(a%2==1)
			count++;             //���ھ����ԣ���������
		a=a/2;
	}
	printf("%d",count);
	return 0;
}
