#include<stdio.h>
struct stu1
{
	int age;
	int height;
};
struct stu
{
	int height;
	int weight;
	int age;
	struct stu1 b;
	char arr[10];
}; 
int main()
{
	struct stu a1={180,65,20,{20,70},"zzz"};
	printf("%s,%d",a1.arr,a1.b.height);
	return 0;
}
