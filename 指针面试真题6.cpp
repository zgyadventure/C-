#include<stdio.h>
int main()
{
	int p[2][5]={1,2,3,4,5,6,7,8,9,10};
	int* p1=(int*)(&p+1);      
	int* p2=(int*)(*(p+1));
	printf("%d %d",*(p1-1),*(p2-1));
	return 0;
}
