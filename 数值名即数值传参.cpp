#include<stdio.h>
int main()
{
	int arr[]={0,1,2,3};
	printf("%p\n",arr);						//这里代表首元素地址 
	printf("%p\n",arr+1);
	printf("%p\n",&arr[0]);					//这里取首元素地址 
	printf("%p\n",&arr[0]+1);	
	printf("%p\n",&arr);   					//这里的&arr是整个数组的地址，只不过后面省略了 
	printf("%p",&arr+1);					//这里可以发现打印的地址正好比上一个多16个字节 
	return 0;	
}
//有2种情况下arr指的不是首元素:1.sizeof(arr)这里的arr是数值名，代表整个数组。 
//							   2.&arr指的是取整个数值的地址。 
