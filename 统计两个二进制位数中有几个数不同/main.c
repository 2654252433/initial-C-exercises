#include <stdio.h>
#include <stdlib.h>

//ͳ������������λ�����м���������ͬ
//���磺����1999 2299
//���Ϊ7�������ǵĶ�����λ����7�����ǲ�ͬ��
int get(int m,int n)
{
    int tmp=m^n;
    int count=0;
    while(tmp)
    {
        tmp=tmp&(tmp-1);
        count++;
    }
    return count;
}

int main()
{
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    int count=get(m,n);
    printf("%d\n",count);
    return 0;
}
