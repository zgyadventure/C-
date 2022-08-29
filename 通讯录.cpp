#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct information
{
	char name[5];
	char gen[5];
	int age;
	char tel[11];
	char addr[20];
};
struct ea
{
	struct information arr[200];         //创建通讯录内存
	int size;								//通讯录已有元素
}zz;
void lint(struct ea* zz)
{
	memset(zz->arr, 0, sizeof(zz->arr));
	zz->size = 0;
}
void show(struct ea* zz)
{
	int i;
	if (zz->size == 0)
	{
		printf("通讯录为空");
	}
	else
	{
		for (i = 0; i < zz->size; i++)
		{
			printf("%s%s%s%s%s", "姓名", "性别", "年龄", "电话号码", "地址");
			printf("%s%s%s%s%s", zz->arr[zz->size].name, zz->arr[zz->size].gen, zz->arr[zz->size].age, zz->arr[zz->size].tel, zz->arr[zz->size].addr);
			zz->size++;
		}
	}
}
void add(struct ea *zz)
{
	if (zz->size >=1000)
	{
		printf("通讯录已满，无法录入");
	}
	else
	{
		printf("请输入姓名:");
		scanf("%s", zz->arr[zz->size].name );
		printf("请输入性别:");
		scanf("%s", zz->arr[zz->size].gen);
		printf("请输入年龄:");
		scanf("%d", &zz->arr[zz->size].age );
		printf("请输入电话号码:");
		scanf("%s", zz->arr[zz->size].tel);
		printf("请输入地址：");
		scanf("%s", zz->arr[zz->size].addr);
		zz->size++;
		printf("录入成功\n\n");
		//show(&zz);
	}
}
void menu()
{
	printf("				1.add		2.delete\n");
	printf("				3.search	4.modify\n");
	printf("				5.show		6.sort\n");
	printf("					0.exit\n");
}
void option()
{
	int input;
	do
	{
		menu();
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			lint(&zz);
			add(&zz);
			break;
		case 2:
			//delete();
			break;
		case 3:
			//search();
			break;
		case 4:
			//modify();
			break;
		case 5:
			show(&zz);
			break;
		case 6:
			//sort();
			break;
		case 0:
			printf("退出成功");
			break;
		}
	}while (input);
}
int main()
{
	option();
	return 0;
}
