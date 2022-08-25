#include<stdio.h>
struct s
{
	int a_:2;
	int b_:5;
	int c_:10;
	int d_:30;
}s1;
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}
