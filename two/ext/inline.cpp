/**
 * inline内联函数
 *      宏定义
 *          优点:内嵌到调用出 避免函数调用带来的开销
 *          缺点:简单的文本替换 如果设计不够精妙可能带来语义上的错误和意想不到的bug
 *      函数
 *          优点:完成某种抽象操作 避免相同功能重复开发 有类型检查
 *          缺点:每次调用都要再开启入栈出栈操作
 *      内联函数
 *          优点:和宏一样都是替换 可以避免函数入栈出栈操作
 *          缺点:在函数体内会出现多个替换副本增加代码段空间
 *          适用场景:函数体小且频繁调用 <=5行
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

#define SQR(x) ((x) * (x))

inline int sqr(int x)
{
    return x * x;
}

int main(int argc, const char *argv[])
{
    // for (int i = 0; i < 5; i++)
    // {
    //     // printf("%d\n", sqr(i));
    //     printf("%d\n", SQR(i));
    // }

    int x = 0;
    while (x < 5)
    {
        printf("%d\n", sqr(x++));
        printf("%d\n", SQR(x++));
    }

    return 0;
}