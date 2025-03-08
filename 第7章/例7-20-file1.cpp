// file1.c (文件 1)
#include <stdio.h>

int main()
{
    extern void enter_string(char str[]);    // 对函数的声明
    extern void delete_string(char str[], char ch); // 对函数的声明
    extern void print_string(char str[]);   // 对函数的声明
    // 以上 3 行声明了在本函数中将要调用的已在其他文件中定义的 3 个函数
    char c, str[80];

    enter_string(str); // 调用在其他文件中定义的 enter_string 函数
    scanf("%c", &c);   // 输入要求删去的字符
    delete_string(str, c); // 调用在其他文件中定义的 delete_string 函数
    print_string(str); // 调用在其他文件中定义的 print_string 函数
    return 0;
}
