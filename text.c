#define _CRT_SECURE_NO_WARNINGS

//引入标准输入输出头文件
#include<stdio.h>
//声明外部变量
extern int num1;
//main函数，程序的执行入口
//void main()
//{
//    printf("Hello World!");
//    //return 0;
//    int a = 10;
//    getchar();
//}

//定义标识符常量
#define Max "adfd"
//定义宏 （有参数）
#define Add(x,y) (x+y)

enum Color 
{
    Red,
    Bule,
    Yellow

};


//  %d int  %f  float  %c  char  %s  char[]字符串类型
int main() 
{
    int d = Add(7, 9);
    //指针变量
    int* p = &d;
    printf("%p", &d);
    test();
    //printf("%c\n", '\a\a');
    char arr[] = "abcdef";
    // \0 字符串的结束标志
    char arr2[8] = { 'a','b','c'};
    printf("%s\n", arr);
    printf("%s\n", arr2);
    int length = strlen(arr2);
    printf("%d\n",length);
    enum Color c = Red;
    printf("%d",c);
   //字面常量
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