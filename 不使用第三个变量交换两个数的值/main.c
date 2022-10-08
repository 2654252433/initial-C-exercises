#include <stdio.h>
#include <stdlib.h>

int main()
{
    //第一种方法
    int a=3;//011
    int b=5;//101
    //按位异或,
    a=a^b;//110
    b=a^b;//011
    a=a^b;//101
    printf("%d %d\n",a,b);

    //进入企业：会采用第三个变量的方法，代码的可读性高，执行效率高
    //异或的操作：可读性差，执行效率低于其它方法

    //第二种方法
    //此处只适合数值小的时候用
    //INT_MAX; 2147483647
    int c=3;
    int d=5;
    c=c+d;
    //如果此处c和d都是很大的数字
    //那么它们的和可能会存不下，就会整型溢出
    d=c-d;
    c=c-d;
    printf("%d %d\n",c,d);
    return 0;
}
