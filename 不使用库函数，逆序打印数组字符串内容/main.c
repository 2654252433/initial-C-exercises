#include <stdio.h>
#include <stdlib.h>

//��ʹ�ÿ⺯���������ӡ�����ַ�������
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

//��һ�ַ����ǲ�ʹ�õݹ�
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

//�ڶ��ַ������õݹ�
void reverse_string(char arr[])
{
    char tmp=arr[0];//�������һ���������ó�����Ȼ���ȷ���һ��
    int len=my_string(arr);//���ַ�������
    arr[0]=arr[len-1];//���ַ������һ���ַ����������һ��λ��
    arr[len-1]='\0';//��ʱ�ٰ����һ��λ���ȷŸ�\0
    if(my_string(arr+1)>=2)//����ַ������ȴ���2�ͼ����ݹ飬ֻʣһ���ַ�������û����ֹͣ
    {
      reverse_string(arr+1);
    }
    arr[len-1]=tmp;//����ٽ���һ���ַ��ŵ���������λ��
}

int main()
{
    char arr[]="abcdef";
    reverse_string(arr);
    printf("%s\n",arr);
    return 0;
}
