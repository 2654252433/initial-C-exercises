#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��ӡ1-100֮��3�ı���
    int i=0;
    printf("3�ı�����:\n");
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
            printf("%d ",i);
    }
    return 0;
}
