#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char id[20];
}; 
int main()
{
	struct Stu s1={"ÕÅÈı",20,"21302121526"};
	struct Stu* p=&s1;
	printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n",s1.id);
	printf("%s\n",p->name);
	printf("%d\n",p->age);
	printf("%s",p->id);
	
	return 0;
}
