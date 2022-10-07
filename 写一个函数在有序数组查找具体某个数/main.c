#include <stdio.h>
#include <stdlib.h>

//�����int arr[]ʵ������һ��ָ��,���Կ���int*arr
int binary_search(int arr[],int k,int sz)
{
    //int sz=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;//�м�Ԫ�ص��±�
        if(arr[mid]<k)
        {
            left=mid+1;
        }
        else if(arr[mid]>k)
        {
            right=mid-1;
        }
        else
            return mid;
    }
    return -1;
}

int main()
{
    //���ֲ��ң���һ�����������в��Ҿ���ĳ����
    //����ҵ��˷�����������±꣬���û�ҵ�����-1
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    //���д������������ʵ���ϴ��ݹ�ȥ����arr��һ��Ԫ�صĵ�ַ
    //int ret=binary_search(arr,k);
    int sz=sizeof(arr)/sizeof(arr[0]);
    int ret=binary_search(arr,k,sz);
    if(ret==-1)
    {
        printf("�Ҳ���\n");
    }
    else
    {
        printf("�ҵ��ˣ��±���%d\n",ret);
    }
    return 0;
}
