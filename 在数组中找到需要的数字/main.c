#include <stdio.h>
#include <stdlib.h>

int main()
{
    //���ֲ����㷨��Ҳ���۰�����㷨
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int k=10;//дһ�����룬���������ҵ���Ҫ���������
    int left=0;//���±�
    int sz=sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
    int right=sz-1;//���±�
    while(left<=right)
    {
        int mid=(left+right)/2;//ÿ�������м���Ǹ��±�
        if(arr[mid]<k)
        {
            left=mid+1;//����±�����ǲ��ҵ��Ǹ���С���������±������м��±������+1
        }
        else if(arr[mid]>k)
        {
            right=mid-1;//����±�����ǲ��ҵ��Ǹ����󣬾������±������м��±������-1
        }
        else
        {
            printf("�ҵ��ˣ��±���:%d",mid);//���м��Ǹ��±�����Ǹ����������
            break;
        }
    }
    if(left>right)//������±�����±궼Ҫ���ˣ� ��˵��û�������
        printf("�Ҳ��������\n");
    return 0;
}
