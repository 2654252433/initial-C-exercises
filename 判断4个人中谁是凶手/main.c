#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ��е�һ��
    //����Ϊ4�����ɷ��Ĺ��ʣ��ָ�����Ϣ��дһ���������ж�˭������������
    //A˵��������
    //B˵����C
    //C˵����D
    //D˵��C�ں�˵
    //��֪3����˵�����滰��1����˵���Ǽٻ�

    int killer=0;
    for(killer='A';killer<='D';killer++)
    {
        if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)
        {
            printf("%c\n",killer);
        }
    }
    return 0;
}
