#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void map(char arr[3][3], int row, int col)
{
	int i;
	int j;
	//地图初始化
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void displayer_map(char arr[3][3], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{   //打印元素那一行
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col-1 )
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分割线那一行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	
	}
	printf("\n");
}
void computermove(char arr[3][3])
{
	int x;
	int y;
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
		
	}
	

}
void playermove(char arr[3][3])
{
	int a;
	int b;
	while (1)
	{
		scanf("%d%d", &a, &b);
		if (arr[a-1][b-1] == ' ')
		{
			arr[a-1][b-1] = '*';
			
			break;
		}
		else
			printf("你是傻逼吗，重新落子\n");
	}

}
int Full(char arr[3][3], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char whowin(char arr[3][3], int row, int col)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')
		{
			return arr[i][0];
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
		{
			return arr[0][i];
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
	{
		return arr[0][0];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] != ' ')
	{ 
		return arr[2][0];
	}
	if (1 == Full(arr, 3, 3))
	{
		return 'Q';
	}
	if (0 == Full(arr, 3, 3))
	{
		return 'C';
	}
}
void game()
{
	srand((unsigned int)time(NULL));
	char ret;
	char arr[3][3] = { 0 };
	map(arr, 3, 3);
	displayer_map(arr, 3, 3);
	while (1)
	{
		playermove(arr);
		displayer_map(arr, 3, 3);
		ret = whowin(arr, 3, 3);
		if (ret != 'C')
		{
			break;
		}
		computermove(arr);
		displayer_map(arr, 3, 3);
		ret = whowin(arr, 3, 3);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了");
	}
	else if (ret == '#')
	{
		printf("你输了小垃圾");
	}
	else 
	{
		printf("平局");
	}
}
	void cover()
	{
		printf("							三子棋游戏\n\n\n\n\n\n");
		printf("							1.进入游戏\n");
		printf("							2.退出游戏\n");
	}
	void test()
	{
		char input;
		cover();
		do
		{
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				system("cls");
				printf("游戏加载中.....");
				Sleep(2000);
				system("cls");
				game();
				break;
			case 2:
				printf("退出游戏成功\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
			}
		} while (input);
	}

int main()
 {
	test();
	return 0;
}
