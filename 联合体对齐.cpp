#include<stdio.h>
union stu
{
	int a;
	char arr[5];          //��Ա��������Ϊ4���ܳ���ȡ������ 
}s1;
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}
