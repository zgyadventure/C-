#include <stdio.h>
int main()
{
	int a;
    while((a=getchar())!=EOF)
    {
    	if(a<'0'||a>'9')                                    
    	  continue;										
    	printf("%c",a);
	}
	return 0;
}
