#include<stdio.h>
#include<math.h>
int main()
{
    int i;
	int j;
	int count;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
	if(j>sqrt(i))										//i=a*b,���a�ܱ���������ôbҲ�ܱ�����,��������ֻ��Ҫ�ж�һ����У�С����һ��һ��С��i�Ŀ�ƽ�� 
	{
		printf("%d������\n",i);
		count++;
	}
	}
	printf("һ��%d��",count);
	return 0;
}
