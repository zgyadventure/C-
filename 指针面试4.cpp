#include<stdio.h>
int main()
{
	int arr[3][4]={0};
	printf("%d\n",sizeof(arr[0][0]));
	printf("%d\n",sizeof(arr[0]));           //二维数组第一行，看作一维数组 
	printf("%d\n",sizeof(arr[0]+1));		 //一维数组arr[0]是首元素地址了，+1变成第二个元素地址。
	printf("%d\n",sizeof(*(arr[0]+1)));      
	printf("%d\n",sizeof(*(arr+1)));
	printf("%d\n",sizeof(&arr[0]));
	printf("%d\n",sizeof(*(&arr[0]+1)));
	printf("%d\n",sizeof(arr[3]));            //sizeof不会去访问地址，是给一个类型判断，不会报错。 
	return 0;
}
