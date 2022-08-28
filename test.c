#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include<stdlib.h>
struct information
{
	char name[5];
	int age;
	char gen;
	char tel[11];
	char addr[20];
};
struct ea
{
	struct information arr[1000];         //创建通讯录内存
	int size;								//通讯录已有元素
}zz;
void add(struct ea zz)
{

}
void menu()
{
	printf("					ͨѶ¼           ");
	printf("			1.add			2.delete\n");
	printf("			3.search		4.modify");
	printf("			5.show			6.sort");
	printf("					0.exit");
}
void option()
{
	int input;
	scanf("%d", &input);
	system("cls");
	switch (input)
	{
	case 1:
		add(zz);
		break;
	case 2:
		delete();
		break;
	case 3:
		search();
		break;
	case 4:
		modify();
		break;
	case 5:
		show();
		break;
	case 6:
		sort();
		break;
	default:
		break;
	}while (input);
}
int main()
{

}