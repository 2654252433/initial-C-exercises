#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //输出100-200之间的素数
    int i=0;
    int num=0;
    for(i=101;i<=200;i+=2)//直接跳过所有的偶数，效率更加块
    {
        //试除法，产生2 -> i-1个数来分别除一下
        int j=0;
        for(j=2;j<=sqrt(i);j++)//sqrt是开平方--数学的库函数需要#include <math.h>
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            printf("%d ",i);
            num++;
        }
    }
    printf("\n素数有:%d个",num);

}
