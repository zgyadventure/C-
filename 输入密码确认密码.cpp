#include <stdio.h>
int main()
{
	char password[10]={0};
	printf("��������:");
	scanf("%s",password);
	printf("�������ȷ��\n");
	while (int ch=getchar()!='\n');
	{                                   			//������ѭ�����϶�ȡ��������Ĳ���ֱ��'\n'����ֹ�ڶ���ȷ������ֱ�Ӷ�ȡ�س� ��������ʧ��. 
		;
	}
	int password_2=getchar();
	if(password_2=='y')
	  printf("����ȷ����ȷ");
	else
	  printf("����ȷ�ϴ���");
	  return 0;
	 
	
	
} 
