#include<stdio.h>
struct stu
{
	char a;
	char b;
	int c;
}s1;
struct stu1
{
	int a;
	int b;
	char c;	
}s2; 
int main()
{
	printf("%d\n",sizeof(s1));
	printf("%d",sizeof(s2));
	return 0;
}
