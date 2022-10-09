#include <stdio.h>
#include <stdlib.h>

int main()
{
    //给出一个非空整型数组，除了某个元素只出现一次外
    //其余元素均出现两次，找出那个只出现一次的数
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
            //弄两个数组来比较，出现相同的就加1，出现两个相同的就加2次，所以单个数的就只能加1次
            {
                count++;
            }
        }
        if(count==1)
        {
         printf("找到了，是:%d\n",arr[i]);
        }
    }

    int brr[]={1,2,3,4,5,1,2,3,4};
    int q=0;
    int ret=0;
    int zs=sizeof(brr)/sizeof(brr[0]);
    for(q=0;q<zs;q++)
    {
        ret=ret^brr[q];//按位异或，满足交换律，两个相同的就会异或为0，而0异或上任何数就会得到那个数
    }
    printf("找到了，是:%d",ret);
    return 0;
}

