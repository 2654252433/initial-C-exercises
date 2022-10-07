#include <stdio.h>
#include <stdlib.h>

void add(int*num)//实参可以和形参变量一样
{
    (*num)++;//*num在前面要加括号，否则++优先级大于*，会变成num++，再*num
    //或者++*num;
    //或者*num+=1;
}

int main()
{
    //写一个函数，每调用一次这个函数num就加1
    int num=0;
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    return 0;
}
