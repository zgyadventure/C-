#include<stdio.h>
#include<stdlib.h>
//void test1()
//{
//	int i;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(i=0;i<9;i++)
//	{
//		printf("%d",arr[i]);
//	}
//}

void qsort(void* base,size_t num,size_t width,int(*cmp_int)(void *e1,void *e2));
int cmp_int(void* e1,void* e2)
{
	if(*(float*)e1==*(float*)e2)
	{
		return 0;
	}
	else if(*(float*)e1>*(float*)e2)
	{
	return 1;
	}
	else
	return -1;
}
void test2()
{
	int i;
	float f[10]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_int);
	for(i=0;i<9;i++)
	{
		printf("%d",f[i]);
	}
}
int main()
{
	test2;
	return 0;
}
