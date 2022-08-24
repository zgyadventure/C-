#include<stdio.h>
struct stu
{
	char a;
	int b;
	char c;
}s;
void test(struct stu* p)
{
	p->a='z';
	p->b=4;
	p->c='s'; 
}
int main()
{
	test(&s);
	printf("%d",s.b );
	return 0;
}
