#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d",&a,&b);
	while(c=a%b)
	{ 
		a=b;    						//while(a%b)��ʾwhile(a%b!=0) ,��C�����кܶ�ʱ�����õ���0��Ϊ�棬Ϊ0ֱ������ѭ�������Կ���������ʾ 
		b=c;							//while(c=a%b)��ʾ��������c 
	}									 
	printf("%d",b);
	return 0;
	
}
