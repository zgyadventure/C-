#include<stdio.h>
#pragma pack(4)			//���ö����� 
struct stu
{
	char a;
	char b;
	double c;
}s1;
#pragma pack()               //ȡ�������� 
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}
