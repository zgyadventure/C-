#include<stdio.h>
int main()
{
	const char* c[]={"ENTER","NEW","POINT","FIRST"};
	const char* *p[]={c+3,c+2,c+1,c};
	const char** *cpp=p;
	
	printf("%s\n",**++cpp);                   //这里++后，后续cpp值会保留 
	printf("%s\n",*--*++cpp+3);               //前半部分从右向左顺序执行，这里要注意--是解引用后-1，c+1-1得到一级指针c,指向ENTER首元素首元素 
	printf("%s\n",*cpp[-2]+3);                //*cpp[-2]=*(*(cpp-2))
	printf("%s\n",cpp[-1][-1]+1);             //cpp[-1][-1]=*(*(cpp-1)-1)
	return 0;
	
}
