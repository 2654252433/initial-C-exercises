#include <stdio.h>
#include <stdlib.h>

int main()
{
    //输入两个数，求它们的最大公约数
    int a;
    int b;
    int c=0;
    scanf("%d%d",&a,&b);
    while(a%b)//如果它们的余数不为0，则继续循环
    {
        c=a%b;//将余数赋给c
        a=b;//将小的那个值赋给a
        b=c;//将余数赋给b
    }
    printf("最大公约数为: %d\n",b);
    return 0;
}
