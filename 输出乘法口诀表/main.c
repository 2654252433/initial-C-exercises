#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��ӡ9*9�˷��ھ���
    int i=0;
    for(i=1;i<=9;i++)
    {
     int j=1;
     for(j=1;j<=i;j++)
     {
         printf("%d*%d=%-2d ",i,j,i*j);
         //-2d��ʾ��ӡ��������λ�������ͣ�2d�ͱ�ʾ�Ҷ���
     }
     printf("\n");//ÿ��ӡ��һ�оͻ���
    }
    return 0;
}
