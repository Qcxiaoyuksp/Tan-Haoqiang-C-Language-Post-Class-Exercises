#include <stdio.h>

int main()
{
    void print_start();    // 声明 print_star 函数
    void print_message();  // 声明 print_message 函数
    print_start();         // 调用 print_star 函数
    print_message();       // 调用 print_message 函数
    print_start();         // 调用 print_star 函数
    return 0;
}

void print_start()    // 定义 print_star 函数
{
    printf("**********\n");
}

void print_message()    // 定义 print_message 函数
{
    printf("How do you do!\n");    // 输出一行文字信息
}
