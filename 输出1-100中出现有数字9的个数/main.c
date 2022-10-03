#include <stdio.h>
#include <stdlib.h>

int main()
{
    //输出1-100之间有多少个数含有数字9
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%10==9)//打印个位数的9
        {
            count++;
        }
        if(i/10==9)//打印十位数的9
        {
            count++;
        }

    }
    printf("count=%d",count);
    return 0;
}
