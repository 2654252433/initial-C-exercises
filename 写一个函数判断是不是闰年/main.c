#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int y)
{
    if(y%4==0&&y%100!=0)
        return 1;
    else if(y%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    //写一个函数来判断输出1000-2000之间的闰年
    int year=0;
    for(year=1000;year<=2000;year++)
    {
        if(is_leap_year(year)==1)
        {
            printf("%d ",year);
        }
    }
    return 0;
}
