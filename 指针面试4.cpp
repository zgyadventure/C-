#include<stdio.h>
int main()
{
	int arr[3][4]={0};
	printf("%d\n",sizeof(arr[0][0]));
	printf("%d\n",sizeof(arr[0]));           //��ά�����һ�У�����һά���� 
	printf("%d\n",sizeof(arr[0]+1));		 //һά����arr[0]����Ԫ�ص�ַ�ˣ�+1��ɵڶ���Ԫ�ص�ַ��
	printf("%d\n",sizeof(*(arr[0]+1)));      
	printf("%d\n",sizeof(*(arr+1)));
	printf("%d\n",sizeof(&arr[0]));
	printf("%d\n",sizeof(*(&arr[0]+1)));
	printf("%d\n",sizeof(arr[3]));            //sizeof����ȥ���ʵ�ַ���Ǹ�һ�������жϣ����ᱨ�� 
	return 0;
}
