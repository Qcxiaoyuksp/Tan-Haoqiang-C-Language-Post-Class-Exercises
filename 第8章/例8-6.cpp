//// 下标法 
//#include <stdio.h>
//
//int main()
//{
//    int a[10];
//    int i;
//
//    printf("please enter 10 integer numbers: "); // 提示输入
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);                      // 输入 10 个整数
//
//    for (i = 0; i < 10; i++)
//        printf("%d ", a[i]);                     // 输出数组元素，用数组名和下标表示
//
//    printf("\n"); // 换行
//    return 0;
//}

//// 通过数组名引用数组元素
//#include <stdio.h>
//
//int main()
//{
//    int a[10];
//    int i;
//
//    printf("please enter 10 integer numbers: "); // 提示输入
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);                      // 输入 10 个整数
//
//    for (i = 0; i < 10; i++)
//        printf("%d ", *(a + i));                 // 通过数组名和元素序号计算元素地址，再找到该元素
//
//    printf("\n"); // 换行
//    return 0;
//}

// 用指针变量指向数组元素
#include <stdio.h>

int main()
{
    int a[10];
    int *p, i; // 定义指针变量 p 和整型变量 i

    printf("please enter 10 integer numbers: "); // 提示输入
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);                      // 输入 10 个整数

    for (p = a; p < (a + 10); p++)               // 用指针 p 遍历数组
        printf("%d ", *p);                       // 输出指针 p 指向的数组元素

    printf("\n"); // 换行
    return 0;
}
