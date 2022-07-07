#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
int game()
{
	srand((unsigned)time(NULL));
	int a=rand()%10;
	int b;
	printf("请猜一个数字:");
	while(a!=b)
	{
		scanf("%d",&b);
		if(b>a)
		{
			printf("猜大了");
		}
		else if(b<a)
		{
			printf("猜小了");
		}
		else
		{
			printf("恭喜你！答对了");
		}
	}
	printf("正确答案是%d",a);
}
int main()
{
	int input;
	printf("                                             猜数字游戏\n\n\n\n\n\n\n");
	printf("                                             1.开始游戏\n");
	printf("                                             2.退出游戏\n");
	scanf("%d",&input);
	system("cls");
	if(input==1)
	{
		printf("进入游戏中....."); 
	    Sleep(2000);
		system("cls");
		game();
	}
	else
	{
		printf("再见");
	}
	
	return 0;
}
