#include <stdio.h>
#include <stdlib.h>

//打印水仙花数
//水仙花数：指一个三位数，其各位数的立方和相加等于它本身
int main()
{
    int i=0;
    for(i=100;i<=999;i++)
    {
        if((i%10)*(i%10)*(i%10)+(i/10%10)*(i/10%10)*(i/10%10)+(i/100)*(i/100)*(i/100)==i)
         printf("%d\n",i);
    }
    return 0;
}
