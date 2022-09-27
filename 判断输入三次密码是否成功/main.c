#include <stdio.h>
#include <stdlib.h>

int main()
{
    //允许输入密码三次，若三次之内登录成功则成功，若失败则不许登录
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("请输入密码:");
        scanf("%s",password);
        if(strcmp(password,"123456")==0)//==不能用来比较两个字符是否相等，可以使用一个库函数--strcmp()
            //strcmp()判断两个字符相等，相等则等于0
        {
            printf("登录成功\n");
            break;
        }
        else
            printf("登录失败\n");
    }
    if(i==3)
        printf("密码输入三次错误，退出登录");
    return 0;
}
