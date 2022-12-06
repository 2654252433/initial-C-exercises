#include <stdio.h>
#include <stdlib.h>

//计算9999999...(150个9)+666666...(150个6)

int main()
{
    int a[150]={};
    int b[150]={};
    int c[151]={0};
    int i=0;
    int m=0;
    for(i=0;i<150;i++)
    {
        a[i]=9;
    }
    for(i=0;i<150;i++)
    {
        b[i]=6;
    }
    for(i=0;i<150;i++)
    {
      m=a[i]+b[i];
      if(i==0)
      {
         c[i]=m/10;
      }
      c[i+1]=m%10;
      if(i>=1)
      {
          if(m>9)
         {
          c[i]=m/10+c[i];
         }
      }
    }
    for(i=0;i<151;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
