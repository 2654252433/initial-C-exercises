#include <stdio.h>
#include <stdlib.h>

//дһ���ݹ飬����һ���Ǹ���������������������֮��
//���磺����1729  �����19
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
