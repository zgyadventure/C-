#include<stdio.h>
int cmp_int(void* e1,void* e2)
{
	return *(int*)e1-*(int*)e2;
}
void swap(char* a,char* b,int width)
{
	int i;
	int tmp;
	for(i=0;i<width;i++)
	{
		tmp=*a;
		*a=*b;
		*b=tmp;
		a++;
		b++;
	}
}
void maopao(void* arr,int sz,int width,int (*cmp)(void* e1,void* e2))
{
	int i;
	int j;
	int tmp;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-1-i;j++)
		{
			if(cmp((char*)arr+j*width,(char*)arr+(j+1)*width)>0)
			{
				swap((char*)arr+j*width,(char*)arr+(j+1)*width,width);
			}
		}
	}
}
int main()
{
	int n;
	int arr[]={1,2,3,4,5,14,25,11,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	maopao(arr,sz,sizeof(arr[0]),cmp_int);
	for(n=0;n<sz;n++)
	{
		printf("%d ",arr[n]);
	}
	return 0;
}
