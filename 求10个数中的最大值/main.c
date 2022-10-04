#include <stdio.h>
#include <stdlib.h>

int main()
{
    //计算10个数中的最大数
    int arr[]={1,2,3,4,5,6,7,8,10,9};
    int i=0;
    int max=arr[0];//假设将数组中第一个数赋给最大值，不要赋值为0，不然如果数组都是负数就会计算不出来
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
