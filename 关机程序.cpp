#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[10]={};
	system("shutdown -s -t 60");
again:
	printf("��ע����ĵ��Խ���һ���к�رգ�����������ȡ���ػ�\n");
	scanf("%s",arr);

	if(strcmp(arr,"������")==0)
	{
		system("shutdown -a");
		printf("��ȡ���ػ�");
	}
	else
	{
		goto again;
	}
	return 0;
}

