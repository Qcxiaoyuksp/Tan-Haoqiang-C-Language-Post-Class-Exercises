#include <stdio.h>

int main()
{
    char string[81];
    int i, num = 0, word = 0;
    char c;
    gets(string);    // 输入一个字符串给字符数组 string
    for (i = 0; (c = string[i]) != '\0'; i++)
        if (c == ' ') word = 0;    // 只要字符不是 '\0' 就继续执行循环
        else if (word == 0)
        {
            word = 1;
            num++;
        }
    printf("There are %d words in this line. \n", num);    // 输出单词数
    return 0;
}
