#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    int j=0;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
        return 0;
    }
    return 1;
}

int main()
{
    //дһ���������ж����100-200֮�������
    int i=0;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i)==1)//�ж��������������ֵΪ1����������
            printf("%d ",i);
    }
    return 0;
}
