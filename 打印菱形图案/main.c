#include <stdio.h>
#include <stdlib.h>

//打印如下的菱形
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

int main()
{
    int line=0;
    int i=0;
    scanf("%d",&line);
    //打印上半部分
    for(i=0;i<line;i++)
    {
        int j=0;
        //打印一行
        //1、打印空格
        for(j=0;j<line-1-i;j++)
        {
            printf(" ");
        }
        //打印*
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //2、打印下半部分
    for(i=0;i<line-1;i++)
    {
        int j=0;
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*line-2*i-3;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
