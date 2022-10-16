#include <stdio.h>
#include <stdlib.h>

//打印杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 ......1
int main()
{
    int arr[20][20]={0};
    int i=0;
    int j=0;
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j==0)
                arr[i][j]=1;//将第一列全部打印为1
            if(i==j)
                arr[i][j]=1;//将对角线打印为1
            if(i>1&&j>0)
            {
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];//中间每个数都为上面的那个数和左上角那个数相加
            }
        }
    }
    //打印
    for(i=0;i<20;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%-5d ",arr[i][j]);//-5d是左对齐空五个空格
        }
        printf("\n");
    }
    return 0;
}
