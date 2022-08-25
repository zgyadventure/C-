#include<stdio.h>
struct stu
{
	char a_:3;
	char b_:5;
	char c_:10;
	int d_:30;
}s;
int main()
{
	struct stu s;
	s.a_=10;
	s.b_=5;
	s.c_=20;
	s.d_=30;
	printf("%d",s.a_);
	return 0;
}
