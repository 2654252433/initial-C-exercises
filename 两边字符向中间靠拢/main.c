#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    //��һ���ַ����������м俿£�Ĵ���
    char arr1[]="I am a smart boy";
    char arr2[]="################";
    int left=0;
    //int right=sizeof(arr1)/sizeof(arr1[0])-2;
    //��Ϊ��������洢�����ַ�����ô�����и�\0������\0Ҳ������Ԫ�ظ���������Ӧ����-2
    int right=strlen(arr1)-1;//�ַ�����-1���ַ������ǲ��������\0��������-1
    //ʹ��strlen()ʱ���ǵ���ͷ�ļ�#include <string.h>
    while(left<=right)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//��Ϣ1000����=1�룬Ҳ�����ӳ�1�룬��Ҫ��ͷ�ļ�#include <windows.h>
        system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ,��Ҫ�õ�ͷ�ļ�#include <stdlib.h>
        left++;
        right--;
    }
    printf("%s",arr2);
    return 0;
}
