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
            *px=x;//ֱ��ͨ����ַ������Ҫ��������ȥ
            *py=y;//ֱ��ͨ����ַ������Ҫ��������ȥ
            return;//��x��y��ֵͨ����ַ���ػ�ȥ
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

//���Ͼ����ÿ�д������ǵ����ģ����ϵ���Ҳ�ǵ�����
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    //1 2 3
    //4 5 6
    //7 8 9
    int x=3;
    int y=3;
    find(arr,&x,&y,7);//�����Ͳ���
    if((x!=-1)&&(y!=-1))
    {
        printf("�ҵ���:%d %d\n",x,y);
    }
    else
    {
        printf("�Ҳ���\n");
    }
    return 0;
}
