#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int n=0;
    int sum=0;
    for(n=1;n<=10;n++)
    {
       int num=1;//�˴�numҪ����forѭ�������ʼ��
        //��Ȼ�ڶ���forѭ������num��һֱ�����źܴ����ֵ
       for(i=1;i<=n;i++)
        {
              num=num*i;
        }
        sum=sum+num;
    }

    printf("1!+2��+...+10!Ϊ��%d\n",sum);
    return 0;
}
