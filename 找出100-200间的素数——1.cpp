#include<stdio.h>
int main()
{
    int i;
	int j;
	int count;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
	if(i==j)											//������ѭ���������2�֣�һ���Ǳ�������������������������һ���ǲ��ܱ�����ѭ����������������������ʱi=j 
	{
		printf("%d������\n",i);
		count++;
	}
	}
	printf("һ��%d��",count);
	return 0;
}
