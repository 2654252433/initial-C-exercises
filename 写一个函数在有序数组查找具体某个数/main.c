#include <stdio.h>
#include <stdlib.h>

//这里的int arr[]实际上是一个指针,可以看成int*arr
int binary_search(int arr[],int k,int sz)
{
    //int sz=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;//中间元素的下标
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
    //二分查找，在一个有序数组中查找具体某个数
    //如果找到了返回这个数的下标，如果没找到返回-1
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    //如果写成下面这样，实际上传递过去的是arr第一个元素的地址
    //int ret=binary_search(arr,k);
    int sz=sizeof(arr)/sizeof(arr[0]);
    int ret=binary_search(arr,k,sz);
    if(ret==-1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了，下标是%d\n",ret);
    }
    return 0;
}
