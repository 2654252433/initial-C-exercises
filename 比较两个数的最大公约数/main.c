#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�����������������ǵ����Լ��
    int a;
    int b;
    int c=0;
    scanf("%d%d",&a,&b);
    while(a%b)//������ǵ�������Ϊ0�������ѭ��
    {
        c=a%b;//����������c
        a=b;//��С���Ǹ�ֵ����a
        b=c;//����������b
    }
    printf("���Լ��Ϊ: %d\n",b);
    return 0;
}
