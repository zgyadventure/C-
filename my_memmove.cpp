#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest,void* stc,int sz)
{
	assert(dest);
	assert(stc);
	void* ret=dest;
	if(dest<stc)
	{
		while(sz--)
		{
			*(char*)dest=*(char*)stc;
			(char*)dest++;
			(char*)stc++;
		}
	}
	else
	{
		while(sz--)
		{
			*((char*)dest+sz)=*((char*)stc+sz);
		}
	}
	return ret;
}
int main()
{
	int arr1[]={1,2,3,4,5,6,7};
	int arr2[10]={0};
	void* ret=my_memmove(arr1,arr2,20);
	for(int i=0;i<10;i++)
	{
		printf("%d",*(int*)ret);
		ret++;
	}
	return 0;
}
