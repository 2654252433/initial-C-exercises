#include <stdio.h>
#include <stdlib.h>

int main()
{
    //������������ʹ���ǰ��Ӵ�С˳���ӡ����
    int a=0;
    int b=0;
    int c=0;
    int cun=0;
    scanf("%d,%d,%d",&a,&b,&c);//����%d֮����˶��ţ��������ʱ��Ҳ�üӶ��ţ�����3,1,2
    if(a<b)//������������һ�£�����Ҳ������
    {
        cun=a;
        a=b;
        b=cun;
    }
    if(a<c)
    {
        cun=a;
        a=c;
        c=cun;
    }
    if(b<c)
    {
        cun=b;
        b=c;
        c=cun;
    }
    printf("�Ӵ�С:%d,%d,%d",a,b,c);
    return 0;
}
