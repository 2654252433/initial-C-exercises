#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int n=0;
    int sum=0;
    for(n=1;n<=10;n++)
    {
       int num=1;//此处num要放在for循环里面初始化
        //不然第二个for循环里面num就一直保留着很大的数值
       for(i=1;i<=n;i++)
        {
              num=num*i;
        }
        sum=sum+num;
    }

    printf("1!+2！+...+10!为：%d\n",sum);
    return 0;
}
