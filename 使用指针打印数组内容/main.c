#include <stdio.h>
#include <stdlib.h>

void zhizhen(int*p,int sz)
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",*(p+i));
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sz=sizeof(arr)/sizeof(arr[0]);
    zhizhen(arr,sz);
    return 0;
}
