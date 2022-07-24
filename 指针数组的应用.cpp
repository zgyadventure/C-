#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,5 };
	int arr2[] = { 5,6,8,9 };
	int arr3[] = { 5,1,6,7 };
	int* arr4[] = { arr1,arr2,arr3 };
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", *(arr4[i] + j));
		}
		printf("\n");
	}
	return 0;
}