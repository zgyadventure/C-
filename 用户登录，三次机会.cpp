#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]={0};
	int i;
	for(i=0;i<3;i++)
	{
		printf("����������:");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)                //�ٺ٣��ַ����ǲ�������==���ж���ȵģ������Ҫ�õ�strcmp���ж������Ƿ���� 
		{												//��ߴ����ұ�Ϊ������ߵ����ұ�Ϊ0�����С���ұ�Ϊ��
			printf("������ȷ����½�ɹ�");
			break;
		}
	}
	if(i==3)
	{
		printf("����������������󣬵�¼ʧ��");
	}
	return 0;
}
