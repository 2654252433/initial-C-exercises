#include <stdio.h>
#include <stdlib.h>

int main()
{
    //二分查找算法，也叫折半查找算法
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int k=10;//写一个代码，在数组中找到需要的这个数字
    int left=0;//左下标
    int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
    int right=sz-1;//右下标
    while(left<=right)
    {
        int mid=(left+right)/2;//每次求最中间的那个下标
        if(arr[mid]<k)
        {
            left=mid+1;//如果下标比我们查找的那个数小，就让左下标在最中间下标基础上+1
        }
        else if(arr[mid]>k)
        {
            right=mid-1;//如果下标比我们查找的那个数大，就让右下标在最中间下标基础上-1
        }
        else
        {
            printf("找到了，下标是:%d",mid);//最中间那个下标等于那个数，就输出
            break;
        }
    }
    if(left>right)//如果左下标比右下标都要大了， 就说明没有这个数
        printf("找不到这个数\n");
    return 0;
}
