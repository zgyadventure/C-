#include<stdio.h>
struct stu1
{
	char a;
	int b;
	char c;
}s1;
struct stu2
{
	char a;
	struct stu1 s3;                   //Ƕ�׽ṹ���ڴ������Ϊ��Ƕ�׽ṹ�������Ƕ�׶����� 
	int b;
}s2;	
int main()
{
	printf("%d\n",sizeof(s1));
	printf("%d",sizeof(s2));
	return 0;
}
