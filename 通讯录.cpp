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
		printf("ͨѶ¼Ϊ��");
	}
	else
	{
		for (i = 0; i < zz->size; i++)
		{
			printf("%s%s%s%s%s", "����", "�Ա�", "����", "�绰����", "��ַ");
			printf("%s%s%s%s%s", zz->arr[zz->size].name, zz->arr[zz->size].gen, zz->arr[zz->size].age, zz->arr[zz->size].tel, zz->arr[zz->size].addr);
			zz->size++;
		}
	}
}
void add(struct ea *zz)
{
	if (zz->size >=1000)
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
