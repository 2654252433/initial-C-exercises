#include <stdio.h>
#include <stdlib.h>

int main()
{
    //����10�����е������
    int arr[]={1,2,3,4,5,6,7,8,10,9};
    int i=0;
    int max=arr[0];//���轫�����е�һ�����������ֵ����Ҫ��ֵΪ0����Ȼ������鶼�Ǹ����ͻ���㲻����
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<sz;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
