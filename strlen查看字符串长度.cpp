#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abc";
	int right=strlen(arr)-1;				//strlen��ѯ�����ַ������ȣ�ͨ��\0Ϊ������׼��һ�ص�ʵ�� 
	printf("%d",right);
	return 0;
}
