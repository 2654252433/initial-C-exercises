#include <stdio.h>
#include <stdlib.h>

//求n的k次方(不考虑负数、小数)
int power(int n,int k)
{
    if(k==0)
        return 1;
    else if(k>0)
    {
        return n*power(n,k-1);
    }
}

int main()
{
    int n=0;
    int k=0;
    int ret=0;
    scanf("%d %d",&n,&k);
    ret=power(n,k);
    printf("%d\n",ret);
    return 0;
}
