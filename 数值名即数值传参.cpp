#include<stdio.h>
int main()
{
	int arr[]={0,1,2,3};
	printf("%p\n",arr);						//���������Ԫ�ص�ַ 
	printf("%p\n",arr+1);
	printf("%p\n",&arr[0]);					//����ȡ��Ԫ�ص�ַ 
	printf("%p\n",&arr[0]+1);	
	printf("%p\n",&arr);   					//�����&arr����������ĵ�ַ��ֻ��������ʡ���� 
	printf("%p",&arr+1);					//������Է��ִ�ӡ�ĵ�ַ���ñ���һ����16���ֽ� 
	return 0;	
}
//��2�������arrָ�Ĳ�����Ԫ��:1.sizeof(arr)�����arr����ֵ���������������顣 
//							   2.&arrָ����ȡ������ֵ�ĵ�ַ�� 
