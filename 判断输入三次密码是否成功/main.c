#include <stdio.h>
#include <stdlib.h>

int main()
{
    //���������������Σ�������֮�ڵ�¼�ɹ���ɹ�����ʧ�������¼
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("����������:");
        scanf("%s",password);
        if(strcmp(password,"123456")==0)//==���������Ƚ������ַ��Ƿ���ȣ�����ʹ��һ���⺯��--strcmp()
            //strcmp()�ж������ַ���ȣ���������0
        {
            printf("��¼�ɹ�\n");
            break;
        }
        else
            printf("��¼ʧ��\n");
    }
    if(i==3)
        printf("�����������δ����˳���¼");
    return 0;
}
