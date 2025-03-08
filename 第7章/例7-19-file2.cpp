extern A; // 把在 file1 文件中已定义的外部变量的作用域扩展到本文件

int power(int n) // 计算 A 的 n 次幂
{
    int i, y = 1;
    for (i = 1; i <= n; i++)
        y *= A; // 循环计算 A 的 n 次幂
    return (y); // 返回结果
}
