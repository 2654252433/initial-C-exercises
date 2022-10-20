#include <stdio.h>
#include <stdlib.h>

//写一个递归，输入一个非负整数，输出组成它的数字之和
//例如：输入1729  输出：19
int digitsum(unsigned int m)
{
    int i=0;
    int a=0;
    while(m)
    {
        a+=m%10;
        m=m/10;
        digitsum(m);
    }
    return a;
}

int main()
{
    unsigned int m=0;
    scanf("%d",&m);
    int n=digitsum(m);
    printf("%d\n",n);
    return 0;
}
