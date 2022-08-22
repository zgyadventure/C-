#include<stdio.h>
#pragma pack(4)			//设置对齐数 
struct stu
{
	char a;
	char b;
	double c;
}s1;
#pragma pack()               //取消对齐数 
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}
