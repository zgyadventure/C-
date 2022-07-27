#include<stdio.h>
void menu()
{
	printf("                                        计算器\n");
	printf("                            1.加法 2.减法 3.乘法 4.除法\n"); 
	printf("                                       0.退出\n");
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
		printf("退出成功");
	}
	else
	printf("选择错误"); 
}
