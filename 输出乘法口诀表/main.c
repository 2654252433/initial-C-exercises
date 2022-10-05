#include <stdio.h>
#include <stdlib.h>

int main()
{
    //打印9*9乘法口诀表
    int i=0;
    for(i=1;i<=9;i++)
    {
     int j=1;
     for(j=1;j<=i;j++)
     {
         printf("%d*%d=%-2d ",i,j,i*j);
         //-2d表示打印左对齐的两位数的整型，2d就表示右对齐
     }
     printf("\n");//每打印完一行就换行
    }
    return 0;
}
