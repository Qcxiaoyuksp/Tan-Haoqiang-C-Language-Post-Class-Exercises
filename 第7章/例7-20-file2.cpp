// file2.c (文件 2)
#include <stdio.h>

void enter_string(char str[80]) // 定义外部函数 enter_string
{
    gets(str); // 向字符数组输入字符串
}
