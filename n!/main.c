#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=0;
    int c=1;
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        c=c*a;
    }
    printf("n:%d\n",c);
    return 0;
}
