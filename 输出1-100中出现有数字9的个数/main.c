#include <stdio.h>
#include <stdlib.h>

int main()
{
    //���1-100֮���ж��ٸ�����������9
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%10==9)//��ӡ��λ����9
        {
            count++;
        }
        if(i/10==9)//��ӡʮλ����9
        {
            count++;
        }

    }
    printf("count=%d",count);
    return 0;
}
