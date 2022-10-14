#include <stdio.h>
#include <stdlib.h>

int main()
{
    //交换两个数组中的内容
    int arr[]={0,1,2,3,4};
    int brr[]={5,6,7,8,9};
    int tmp=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(i=0;i<sz;i++)
    {
        tmp=arr[i];
        arr[i]=brr[i];
        brr[i]=tmp;
    }
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<sz;i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}
