#include<stdio.h>
int* test()
{
	int a=10;
	return &a;
}
int main()
{
	//int* p;ָ��δ��ʼ������ΪҰָ�� 
	//*p=20;
	
	//int arr[10]={0};
	//int i;
	//for(i=0;i<12;i++)
	//{
	//	p++;				ָ��Խ����ʣ�������ֳ�ΪҰָ�� 
	//}
	
	//ָ��ָ��Ŀռ��ͷţ��ػ�ϵͳ�������ڳ���
	int* p=test();
	*p=20;
	return 0;
}
