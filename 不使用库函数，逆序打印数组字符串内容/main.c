#include <stdio.h>
#include <stdlib.h>

//不使用库函数，逆序打印数组字符串内容
int my_string(char*str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}

//第一种方法是不使用递归
/* void reverse_string(char arr[])
{
    int left=0;
    int right=my_string(arr)-1;
    while(left<right)
    {
        int tmp=arr[right];
        arr[right]=arr[left];
        arr[left]=tmp;
        left++;
        right--;
    }
}
*/

//第二种方法是用递归
void reverse_string(char arr[])
{
    char tmp=arr[0];//将数组第一个内容先拿出来，然后先放在一旁
    int len=my_string(arr);//求字符串长度
    arr[0]=arr[len-1];//将字符串最后一个字符放在数组第一个位置
    arr[len-1]='\0';//此时再把最后一个位置先放个\0
    if(my_string(arr+1)>=2)//如果字符串长度大于2就继续递归，只剩一个字符串或者没有则停止
    {
      reverse_string(arr+1);
    }
    arr[len-1]=tmp;//最后再将第一个字符放到数组最后的位置
}

int main()
{
    char arr[]="abcdef";
    reverse_string(arr);
    printf("%s\n",arr);
    return 0;
}
