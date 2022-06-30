#include <stdio.h>
int main()
{
	int i=0;
	int j=0;
	for(;i<10;i++)
	{
		for(;j<10;j++)										//省略条件结果改变，i=0时j循环打印10次，值变为10，因为j=0在循环外，循环里的j值不会归0，导致i=1-10时，j=10，循环不满足条件 
		{													//注意不初始化变量时，值为0或1 
			printf("hehe\n");
		}
	}
	
	    
	
	return 0;
	
}
