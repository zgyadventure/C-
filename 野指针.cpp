#include<stdio.h>
int* test()
{
	int a=10;
	return &a;
}
int main()
{
	//int* p;指针未初始化，成为野指针 
	//*p=20;
	
	//int arr[10]={0};
	//int i;
	//for(i=0;i<12;i++)
	//{
	//	p++;				指针越界访问，溢出部分成为野指针 
	//}
	
	//指针指向的空间释放，重回系统，不属于程序
	int* p=test();
	*p=20;
	return 0;
}
