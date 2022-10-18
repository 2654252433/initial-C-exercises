#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0;
    int i=0;
    scanf("%d",&m);
    printf("奇数位:");
    for(i=30;i>=0;i-=2)
    {
        printf("%d ",(m>>i)&1);
    }
    printf("\n");
    printf("偶数位:");
    for(i=31;i>=0;i-=2)
    {
        printf("%d ",(m>>i)&1);
    }
    return 0;
}
