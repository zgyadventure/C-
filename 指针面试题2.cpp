#include<stdio.h>
#include<string.h>
int main()
{
	char arr[6]={'a','b','b','d','e','f'};
	printf("%d\n",strlen(arr));
	printf("%d\n",strlen(arr+0));
	//printf("%d",strlen(*arr));  strlen���ҵ�ַ��Ȼ���������'\0'�����ｫ'a'��ascii��ֵ97��Ϊ��ַ�����ң��ᱨ�� 
	//printf("%d",strlen(arr[0]));    ͬ�ϱ��� 
	//printf("%d\n",strlen(&arr));�����������ֵ��֪��Ϊë���� 
	//printf("%d",strlen(&arr+1));
	return 0;
}
