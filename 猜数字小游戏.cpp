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
	printf("���һ������:");
	while(a!=b)
	{
		scanf("%d",&b);
		if(b>a)
		{
			printf("�´���");
		}
		else if(b<a)
		{
			printf("��С��");
		}
		else
		{
			printf("��ϲ�㣡�����");
		}
	}
	printf("��ȷ����%d",a);
}
int main()
{
	int input;
	printf("                                             ��������Ϸ\n\n\n\n\n\n\n");
	printf("                                             1.��ʼ��Ϸ\n");
	printf("                                             2.�˳���Ϸ\n");
	scanf("%d",&input);
	system("cls");
	if(input==1)
	{
		printf("������Ϸ��....."); 
	    Sleep(2000);
		system("cls");
		game();
	}
	else
	{
		printf("�ټ�");
	}
	
	return 0;
}
