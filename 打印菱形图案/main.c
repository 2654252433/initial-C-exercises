#include <stdio.h>
#include <stdlib.h>

//��ӡ���µ�����
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

int main()
{
    int line=0;
    int i=0;
    scanf("%d",&line);
    //��ӡ�ϰ벿��
    for(i=0;i<line;i++)
    {
        int j=0;
        //��ӡһ��
        //1����ӡ�ո�
        for(j=0;j<line-1-i;j++)
        {
            printf(" ");
        }
        //��ӡ*
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //2����ӡ�°벿��
    for(i=0;i<line-1;i++)
    {
        int j=0;
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*line-2*i-3;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
