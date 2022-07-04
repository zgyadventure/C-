#include<stdio.h>
int main()
{
	int year;
	int count;
	for(year=1000;year<=2000;year++)
	{
		if(year%4==0 && year%100!=0)
		{
			printf("%d\n",year);
			count++;
		}
		else if(year%400==0)
		{
			printf("%d\n",year);
			count++;
		}
	}
	printf("Ò»¹²%d¸ö",count);
	return 0;
}
