#include <stdio.h>
#include <stdlib.h>

void add(int*num)//ʵ�ο��Ժ��βα���һ��
{
    (*num)++;//*num��ǰ��Ҫ�����ţ�����++���ȼ�����*������num++����*num
    //����++*num;
    //����*num+=1;
}

int main()
{
    //дһ��������ÿ����һ���������num�ͼ�1
    int num=0;
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    return 0;
}
