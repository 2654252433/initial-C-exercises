#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    //做一个字符从两边向中间靠拢的代码
    char arr1[]="I am a smart boy";
    char arr2[]="################";
    int left=0;
    //int right=sizeof(arr1)/sizeof(arr1[0])-2;
    //因为数组如果存储的是字符，那么最后会有个\0，所以\0也算数组元素个数，上面应该是-2
    int right=strlen(arr1)-1;//字符长度-1，字符长度是不算数组的\0，所以是-1
    //使用strlen()时，记得用头文件#include <string.h>
    while(left<=right)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//休息1000毫秒=1秒，也就是延迟1秒，需要用头文件#include <windows.h>
        system("cls");//执行系统命令的一个函数-cls-清空屏幕,需要用到头文件#include <stdlib.h>
        left++;
        right--;
    }
    printf("%s",arr2);
    return 0;
}
