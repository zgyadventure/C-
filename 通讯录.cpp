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
	struct information arr[200];         //����ͨѶ¼�ڴ�
	int size;								//ͨѶ¼����Ԫ��
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
		printf("ͨѶ¼�������޷�¼��");
	}
	else
	{
		printf("����������:");
		scanf("%s", zz->arr[zz->size].name );
		printf("�������Ա�:");
		scanf("%s", zz->arr[zz->size].gen);
		printf("����������:");
		scanf("%d", &zz->arr[zz->size].age );
		printf("������绰����:");
		scanf("%s", zz->arr[zz->size].tel);
		printf("�������ַ��");
		scanf("%s", zz->arr[zz->size].addr);
		zz->size++;
		printf("¼��ɹ�\n\n");	
	}
}
void show(struct ea* zz)
{
	int i;
	if (zz->size == 0)
	{
		printf("ͨѶ¼Ϊ��");
	}
	else
	{
		printf("%-10s\t%-5s\t%-5s\t%-11s\t%-10s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
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
	printf("������Ҫɾ����ϵ�˵�����:");
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
		printf("δ�ҵ�Ҫɾ������ϵ��");
	}
	if(i<zz->size)
	{
		for(j=i;j<zz->size-1;j++)
		{
			zz->arr[j]=zz->arr[j+1];
		}
	}
	zz->size--;
	printf("ɾ���ɹ�");
}
void search(struct ea* zz)
{
	char name[5];
	int i;
	printf("��Ҫ���ҵ���ϵ��:");
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
		printf("û�и���ϵ��");
	}
	if(i<zz->size)
	{
		printf("%-10s\t%-5s\t%-5s\t%-11s\t%-10s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
		printf("%-10s\t%-5s\t%-4d\t%-11s\t%-10s\n", zz->arr[i].name, zz->arr[i].gen, zz->arr[i].age, zz->arr[i].tel, zz->arr[i].addr);
	}
}
void modify(struct ea* zz)
{
	char name[5];
	int i;
	printf("��������Ҫ�޸ĵ���ϵ��");
	scanf("%s",name);
	for(i=0;i<zz->size;i++)
	{
		if(0==strcmp(name,zz->arr[i].name))
		{
			printf("%-10s\t%-5s\t%-5s\t%-11s\t%-10s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
			printf("%-10s\t%-5s\t%-4d\t%-11s\t%-10s\n", zz->arr[i].name, zz->arr[i].gen, zz->arr[i].age, zz->arr[i].tel, zz->arr[i].addr);
			printf("����������:");
			scanf("%s", zz->arr[i].name );
			printf("�������Ա�:");
			scanf("%s", zz->arr[i].gen);
			printf("����������:");
			scanf("%d", &zz->arr[i].age );
			printf("������绰����:");
			scanf("%s", zz->arr[i].tel);
			printf("�������ַ��");
			scanf("%s", zz->arr[i].addr);
			printf("�޸ĳɹ�\n\n");	
			break;
		}
	}
	if(i==zz->size)
	{
		printf("û�и���ϵ��");
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
			printf("�˳��ɹ�");
			break;
		}
	}while (input);
}
int main()
{
	option();
	return 0;
}
