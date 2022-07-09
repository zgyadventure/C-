#include<Stdio.h>
void print(int n)
{
	if(n>9)
	{
		print(n/10);											//递归调用实现print(1234) 
	}															//		print(123) 4		
	printf("%d ",n%10);											//      print(12)  3 4
}																//		print(1)   2 3 4
int main()
{
	int a;
	scanf("%d",&a);
	print(a);
	return 0;
}
