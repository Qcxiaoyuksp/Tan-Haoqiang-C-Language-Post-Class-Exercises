// file3.c (�ļ� 3)
#include <stdio.h>

void delete_string(char str[], char ch) // �����ⲿ���� delete_string
{
    int i, j;
    for (i = j = 0; str[i] != '\0'; i++)
        if (str[i] != ch)
            str[j++] = str[i];
    str[j] = '\0';
}
