#include <stdio.h>
#include <stdlib.h>

int main()
{
    //输入三个数，使它们按从大到小顺序打印出来
    int a=0;
    int b=0;
    int c=0;
    int cun=0;
    scanf("%d,%d,%d",&a,&b,&c);//这里%d之间加了逗号，那输入的时候也得加逗号，例如3,1,2
    if(a<b)//将两个数交换一下，下面也是两个
    {
        cun=a;
        a=b;
        b=cun;
    }
    if(a<c)
    {
        cun=a;
        a=c;
        c=cun;
    }
    if(b<c)
    {
        cun=b;
        b=c;
        c=cun;
    }
    printf("从大到小:%d,%d,%d",a,b,c);
    return 0;
}
