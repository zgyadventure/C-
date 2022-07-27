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
	scanf("%d",&input);
	switch(input)
	{
		case 1:
			scanf("%d%d",&a,&b);
			printf("%d",Add(a,b));
			break;
		case 2:
			scanf("%d%d",&a,&b);
			printf("%d",Sub(a,b));
			break;
		case 3:
			scanf("%d%d",&a,&b);
			printf("%d",Mul(a,b));
			break;
		case 4:
			scanf("%d%d",&a,&b);
			printf("%d",Div(a,b));
			break;
		case 0:
			break;
	}
	return 0;
}
