#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdefg";
	char arr2[]="abcd";
	if(strstr(arr1,arr2)==NULL)                    //�ҵ���Ӧ�ַ������ظ��ַ�����Ԫ�ص�ַ 
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
}
