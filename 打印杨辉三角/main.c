#include <stdio.h>
#include <stdlib.h>

//��ӡ�������
//1
//1 1
//1 2 1
//1 3 3 1
//1 ......1
int main()
{
    int arr[20][20]={0};
    int i=0;
    int j=0;
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j==0)
                arr[i][j]=1;//����һ��ȫ����ӡΪ1
            if(i==j)
                arr[i][j]=1;//���Խ��ߴ�ӡΪ1
            if(i>1&&j>0)
            {
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];//�м�ÿ������Ϊ������Ǹ��������Ͻ��Ǹ������
            }
        }
    }
    //��ӡ
    for(i=0;i<20;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%-5d ",arr[i][j]);//-5d������������ո�
        }
        printf("\n");
    }
    return 0;
}
