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
enum cc
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};
void lint(struct ea* zz)
{
	memset(zz->arr, 0, sizeof(zz->arr));
	zz->size = 0;
}
void add(struct ea *zz)
{
	if (zz->size >=200)
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
	}
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
		printf("%-10s\t%-5s\t%-5s\t%-11s\t%-10s\n", "姓名", "性别", "年龄", "电话号码", "地址");
		for (i = 0; i < zz->size; i++)
		{
			printf("%-10s\t%-5s\t%-4d\t%-11s\t%-10s\n", zz->arr[i].name, zz->arr[i].gen, zz->arr[i].age, zz->arr[i].tel, zz->arr[i].addr);
		};
	}
}
void del(struct ea* zz)
{
	char name[5];
	int i; 
	int j;
	printf("请输入要删除联系人的名字:");
	scanf("%s",name);
	for(i=0;i<zz->size;i++)
	{
		if(0==strcmp(name,zz->arr[i].name))
		{
			break;
		}
	}
	if(i==zz->size)
	{
		printf("未找到要删除的联系人");
	}
	if(i<zz->size)
	{
		for(j=i;j<zz->size-1;j++)
		{
			zz->arr[j]=zz->arr[j+1];
		}
	}
	zz->size--;
	printf("删除成功");
}
void search(struct ea* zz)
{
	char name[5];
	int i;
	printf("你要查找的联系人:");
	scanf("%s",name);
	for(i=0;i<zz->size;i++)
	{
		if(0==strcmp(name,zz->arr[i].name))
		{
			break;
		}
	}
	if(i==zz->size)
	{
		printf("没有该联系人");
	}
	if(i<zz->size)
	{
		printf("%-10s\t%-5s\t%-5s\t%-11s\t%-10s\n", "姓名", "性别", "年龄", "电话号码", "地址");
		printf("%-10s\t%-5s\t%-4d\t%-11s\t%-10s\n", zz->arr[i].name, zz->arr[i].gen, zz->arr[i].age, zz->arr[i].tel, zz->arr[i].addr);
	}
}
void modify(struct ea* zz)
{
	char name[5];
	int i;
	printf("请输入你要修改的联系人");
	scanf("%s",name);
	for(i=0;i<zz->size;i++)
	{
		if(0==strcmp(name,zz->arr[i].name))
		{
			printf("%-10s\t%-5s\t%-5s\t%-11s\t%-10s\n", "姓名", "性别", "年龄", "电话号码", "地址");
			printf("%-10s\t%-5s\t%-4d\t%-11s\t%-10s\n", zz->arr[i].name, zz->arr[i].gen, zz->arr[i].age, zz->arr[i].tel, zz->arr[i].addr);
			printf("请输入姓名:");
			scanf("%s", zz->arr[i].name );
			printf("请输入性别:");
			scanf("%s", zz->arr[i].gen);
			printf("请输入年龄:");
			scanf("%d", &zz->arr[i].age );
			printf("请输入电话号码:");
			scanf("%s", zz->arr[i].tel);
			printf("请输入地址：");
			scanf("%s", zz->arr[i].addr);
			printf("修改成功\n\n");	
			break;
		}
	}
	if(i==zz->size)
	{
		printf("没有该联系人");
	}
	
}
void menu()
{
	
	printf("										1.add		2.delete\n");
	printf("										3.search	4.modify\n");
	printf("										5.show		6.sort\n");
	printf("											0.exit\n");
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
		case Add:
			add(&zz);
			break;
		case Del:
			del(&zz);
			break;
		case Search:
			search(&zz);
			break;
		case Modify:
			modify(&zz);
			break;
		case Show:
			show(&zz);
			break;
		case Sort:
			//sort();
			break;
		case Exit:
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
