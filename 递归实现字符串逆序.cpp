#include<stdio.h>
 
void print(char* name);
int main()
{
    char name[20] = {0};
    scanf("%s", name);//输入字符串
    print(name);
    return 0;
}
void print(char* name)//颠倒输出函数
{
    if (*name != '\0')// 
    {
        print(name + 1);
    }
    putchar(*name);//递归出口
}
