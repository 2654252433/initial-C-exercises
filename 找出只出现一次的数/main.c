#include <stdio.h>
#include <stdlib.h>

int main()
{
    //����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ����
    //����Ԫ�ؾ��������Σ��ҳ��Ǹ�ֻ����һ�ε���
    int arr[]={1,2,3,4,5,4,1,2,3,4};
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        int count=0;
        int j=0;
        for(j=0;j<sz;j++)
        {
            if(arr[i]==arr[j])
            //Ū�����������Ƚϣ�������ͬ�ľͼ�1������������ͬ�ľͼ�2�Σ����Ե������ľ�ֻ�ܼ�1��
            {
                count++;
            }
        }
        if(count==1)
        {
         printf("�ҵ��ˣ���:%d\n",arr[i]);
        }
    }

    int brr[]={1,2,3,4,5,1,2,3,4};
    int q=0;
    int ret=0;
    int zs=sizeof(brr)/sizeof(brr[0]);
    for(q=0;q<zs;q++)
    {
        ret=ret^brr[q];//��λ������㽻���ɣ�������ͬ�ľͻ����Ϊ0����0������κ����ͻ�õ��Ǹ���
    }
    printf("�ҵ��ˣ���:%d",ret);
    return 0;
}

