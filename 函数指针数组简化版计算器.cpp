#include<stdio.h>
void menu()
{
	printf("                                        ������\n");
	printf("                            1.�ӷ� 2.���� 3.�˷� 4.����\n"); 
	printf("                                       0.�˳�\n");
}
int Add(int a,int b)
{
	return a+b;
}
int Sub(int a,int b)
{
	return a-b;
}
int Mul(int a,int b)
{
	return a*b;
}
int Div(int a,int b)
{
	return a/b;
}
int main()
{
	menu();
	int input;
	int a;
	int b;
	int (*p[])(int,int)={0,Add,Sub,Mul,Div};
	scanf("%d",&input);
	if(input>=1&&input<=4)
	{
	scanf("%d%d",&a,&b);
	printf("%d",p[input](a,b));
	}
	else if(input==0)
	{
		printf("�˳��ɹ�");
	}
	else
	printf("ѡ�����"); 
}
