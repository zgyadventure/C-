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
int cmp(const void* e1,const void* e2)
{
	if(*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else
		return -1;
}
void test2()
{
	int j;
	float f[10]={1.0,12.0,3.0,4.0,5.0,6.0,7.0,11.0,9.0,10.0};
	int sz=sizeof(f)/sizeof(f[0]); 
	qsort(f,sz,sizeof(f[0]),cmp);
	for(j=0;j<10;j++)
	{
		printf("%f\n",f[j]);
	}
}
int main()
{
	test2();
	return 0;
}
