#include<stdio.h>
int main()
{
	int a=10;                 //00000000 00000000 00000000 00001010
	unsigned int b=-20;		  //01111111 11111111 11111111 11110101
	int c=a+b;				  //01111111 11111111 11111111 11110110
	printf("%d",c);			  //10000000 00000000 00000000 00010010
	return 0;  				  	   
}                     		  
