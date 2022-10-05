#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    int j=0;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
        return 0;
    }
    return 1;
}

int main()
{
    //写一个函数来判断输出100-200之间的素数
    int i=0;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i)==1)//判断条件，如果返回值为1，就是素数
            printf("%d ",i);
    }
    return 0;
}
