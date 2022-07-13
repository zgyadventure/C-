#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
//初始化系统内部棋盘
void map_0(char arr1[ROWS][COLS],int row,int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			arr1[i][j] = '0';
		}
	}
}
//初始化给玩家看的棋盘
void map_1(char arr2[ROWS][COLS],int row,int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			arr2[i][j] = '*';
		}
	}
}
//打印棋盘
void show_map(char arr2[ROWS][COLS], int row, int col)
{
	int i=0;
	int j=0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", arr2[i][j]);
		}
		printf("\n");
	}
}
//布置雷
void ms(char arr1[ROWS][COLS], int row, int col)
{
	int count=10;
	int x;
	int y;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr1[x][y] == '0')
		{
			arr1[x][y] = '1';
			count--;
		}
	}
}
//显示周围雷的个数
int mine_count(char arr1[ROWS][COLS], int row, int col)
{
	return (arr1[row - 1][col] + arr1[row - 1][col - 1]
		+ arr1[row][col - 1] + arr1[row + 1][col - 1] + arr1[row + 1][col] + arr1[row + 1][col + 1]
		+ arr1[row][col + 1] + arr1[row - 1][col +1])
		- 8 * '0';
}
//找雷，给提示，游戏输赢判断
void find_s(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col)
{
	int a;
	int b;
	int c=0;
	while (c<71)
	{
		printf("输入你想选的位置");
		scanf("%d%d", &a, &b);
	
		if (a >= 1 && a <= 9 && b >= 1 && b <= 9)
		{//下的位置合法
			if (arr1[a][b] == '1')
			{
				printf("臭弟弟，你无了\n");
				show_map(arr1, row, col);
				break;
			}
			else
			{
				printf("还不错哦\n");
				int count=mine_count(arr1, a,b);
				arr2[a][b] = count + '0';
				show_map(arr2, row, col);
				c++;
			}
		}
		else
		{
			printf("瓜皮，那里不可以\n");
		}
	}
	if (c == 71)
	{
		printf("恭喜你，排雷成功");
		show_map(arr1, row, col);

	}
}
void game()
{
	srand((unsigned int)time(NULL));
	char Arr1[ROWS][COLS] = { 0 };
	char Arr2[ROWS][COLS] = { 0 };
	map_0(Arr1,ROWS,COLS);
	map_1(Arr2,ROWS,COLS);
	ms(Arr1, ROW, COL);
	show_map(Arr2, ROW, COL);
	find_s(Arr1, Arr2, ROW, COL);

}
void menu()
{
	printf("\n\n");
	printf("						   扫雷小游戏\n\n\n\n\n\n");
	printf("						(按 1 )开始游戏\n");
	printf("						(按 2 )退出游戏\n");
}
void test()
{
	int input;
	menu();
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			printf("亲，游戏加载中哦....");
			Sleep(2000);
			system("cls");
			game();
			break;
		case 0:
			printf("退出游戏成功");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}