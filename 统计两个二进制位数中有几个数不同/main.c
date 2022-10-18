#include <stdio.h>
#include <stdlib.h>

//统计两个二进制位数中有几个数不相同
//例如：输入1999 2299
//输出为7，即它们的二进制位中有7个数是不同的
int get(int m,int n)
{
    int tmp=m^n;
    int count=0;
    while(tmp)
    {
        tmp=tmp&(tmp-1);
        count++;
    }
    return count;
}

int main()
{
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    int count=get(m,n);
    printf("%d\n",count);
    return 0;
}
