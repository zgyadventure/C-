#include<stdio.h>
#include<math.h>
int main()
{
    int i;
	int j;
	int count;
	for(i=101;i<=200;i+=2)
	{
		for(j=2;j<sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
	if(j>sqrt(i))										//ż��һ��Ϊ��������������Ż����� 
	{
		printf("%d������\n",i);
		count++;
	}
	}
	printf("һ��%d��",count);
	return 0;
}
