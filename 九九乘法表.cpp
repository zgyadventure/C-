#include<stdio.h>
int main()
{
	int i;
	int j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);	//����Ҳ����%-2d��������ʽ���� 
		}
		printf("\n");
	}
	return 0;
}
