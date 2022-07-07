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
	scanf("%d",&b);
	if(a==b)
	{
		printf("猜对了"); 
		printf("%d",a);
	}
	else 
	{
		printf("猜错了");
		printf("%d",a);
	}
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
