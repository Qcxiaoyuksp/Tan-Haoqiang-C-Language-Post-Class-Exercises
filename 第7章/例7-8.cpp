#include <stdio.h>

int main()
{
    void hanoi(int n, char one, char two, char three); // 对 hanoi 函数的声明
    int m;

    printf("input the number of diskes: "); // 提示输入
    scanf("%d", &m);                        // 输入盘子的数量
    printf("The step to move %d diskes:\n", m);
    hanoi(m, 'A', 'B', 'C');                // 调用 hanoi 函数

    return 0;
}

void hanoi(int n, char one, char two, char three) // 定义 hanoi 函数
// 将 n 个盘从 one 座借助 two 座，移到 three 座
{
    void move(char x, char y); // 对 move 函数的声明

    if (n == 1)
        move(one, three);      // 如果只有一个盘子，直接移动到目标座
    else
    {
        hanoi(n - 1, one, three, two); // 将 n-1 个盘从 one 座借助 three 座，移到 two 座
        move(one, three);              // 将第 n 个盘从 one 座移到 three 座
        hanoi(n - 1, two, one, three); // 将 n-1 个盘从 two 座借助 one 座，移到 three 座
    }
}

void move(char x, char y)    // 定义 move 函数
{
    printf("%c->%c\n", x, y); // 输出移动步骤
}
