#include <stdio.h>
#include <stdlib.h>

int main()
{
    //打印1-100之间3的倍数
    int i=0;
    printf("3的倍速有:\n");
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
            printf("%d ",i);
    }
    return 0;
}
