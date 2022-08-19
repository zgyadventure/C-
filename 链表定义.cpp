#include<stdio.h>
struct zgy
{
	int height;
	int weight;
	int age;
	struct zgy* next;                 //链表，数据域和指针域， 
};				
//typedef struct
//{
//	int age;
//	zgy* next;    				//匿名结构体在这种情况下不能使用，涉及定义先后问题 
//}next;									
int main()
{
	struct zgy a1;
}
