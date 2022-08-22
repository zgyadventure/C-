#include<stdio.h>
#include<stddef.h>
struct stu
{
	char a;
	char b;
	int c;
}s1;
int main()
{
	printf("%d\n",offsetof(struct stu,a));
	printf("%d\n",offsetof(struct stu,b));
	printf("%d",offsetof(struct stu,c));
	return 0;
}
