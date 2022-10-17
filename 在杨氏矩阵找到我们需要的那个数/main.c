#include <stdio.h>
#include <stdlib.h>

void find(int arr[3][3],int* px,int* py,int key)
{
    int x=0;
    int y=*py-1;
    while((x<=*px)&&(y>=0))
    {
        if(arr[x][y]==key)
        {
            *px=x;//直接通过地址将所需要的数带回去
            *py=y;//直接通过地址将所需要的数带回去
            return;//将x和y的值通过地址返回回去
        }
        else if(arr[x][y]>key)
        {
            y--;
        }
        else
        {
            x++;
        }
    }
}

//杨氏矩阵的每行从左到右是递增的，从上到下也是递增的
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    //1 2 3
    //4 5 6
    //7 8 9
    int x=3;
    int y=3;
    find(arr,&x,&y,7);//返回型参数
    if((x!=-1)&&(y!=-1))
    {
        printf("找到了:%d %d\n",x,y);
    }
    else
    {
        printf("找不到\n");
    }
    return 0;
}
