#include <stdio.h>
#include <stdlib.h>

int main()
{
    //����һ��������������Ķ�����λ�к���1�ĸ���
    int num=0;
    int i=0;
    int count=0;
    scanf("%d",&num);
    for(i=0;i<32;i++)
    {
            if((num>>i)&1==1)
                count++;
    }
    printf("%d\n",count);
    return 0;
}
