#include<stdio.h>
union stu
{
	int a;
	char arr[5];          //成员最大对齐数为4，总长度取整数倍 
}s1;
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}
