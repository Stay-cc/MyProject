#define _CRT_SECURE_NO_WARNINGS

//�����׼�������ͷ�ļ�
#include<stdio.h>
//�����ⲿ����
extern int num1;
//main�����������ִ�����
//void main()
//{
//    printf("Hello World!");
//    //return 0;
//    int a = 10;
//    getchar();
//}

//�����ʶ������
#define Max "adfd"
//����� ���в�����
#define Add(x,y) (x+y)

enum Color 
{
    Red,
    Bule,
    Yellow

};


//  %d int  %f  float  %c  char  %s  char[]�ַ�������
int main() 
{
    int d = Add(7, 9);
    //ָ�����
    int* p = &d;
    printf("%p", &d);
    test();
    //printf("%c\n", '\a\a');
    char arr[] = "abcdef";
    // \0 �ַ����Ľ�����־
    char arr2[8] = { 'a','b','c'};
    printf("%s\n", arr);
    printf("%s\n", arr2);
    int length = strlen(arr2);
    printf("%d\n",length);
    enum Color c = Red;
    printf("%d",c);
   //���泣��
    1;
    3.6;
    'qq';
    "abc";
   const int a = 9;
    int nums[9] = { 1 };
    switch (a) 
    {
        case 9:
            printf("666");
            break;
    }
    printf("%s\n", Max);

    {
       
        int num2 = 6;
        //scanf("%d", &num1);
        int num = num1 + num2;
        printf("num=%d", num);
    }
    
    printf("num=%d",num1);
    return 0;
    
}