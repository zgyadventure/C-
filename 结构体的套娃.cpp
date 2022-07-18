#include<stdio.h>
struct stu
{
	char name[10];
	int age;
	char id[10];
};
typedef struct Stu
{
	char name[10];
	int age;
	struct stu s1;
	char id[8];
}Stu;
int main()
{
	struct stu s1={"张三",20,"213022152"};
	Stu s2={"李四",21,{"张三",20,"213022152"},"2136589"};
	printf("%s",s2.name);
	printf("%d",s2.age);
	printf("%s",s2.s1.name);
	return 0;
	
	
}
