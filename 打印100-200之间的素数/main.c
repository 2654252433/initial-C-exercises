#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //���100-200֮�������
    int i=0;
    int num=0;
    for(i=101;i<=200;i+=2)//ֱ���������е�ż����Ч�ʸ��ӿ�
    {
        //�Գ���������2 -> i-1�������ֱ��һ��
        int j=0;
        for(j=2;j<=sqrt(i);j++)//sqrt�ǿ�ƽ��--��ѧ�Ŀ⺯����Ҫ#include <math.h>
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            printf("%d ",i);
            num++;
        }
    }
    printf("\n������:%d��",num);

}
