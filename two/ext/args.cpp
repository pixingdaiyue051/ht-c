/**
 * 1、形参 实参 默认参数
 *      实参个数+默认参数个数>=形参个数
 *      设置默认参数必须按照从右向左顺序设置 不能跳跃
 * 2、有默认参数的函数不能再重载
 *      一定程度上破坏了多态
 */
#include <iostream>
using namespace std;

/**
 * 形参可以设置一个默认参数 当没有参数传入时就使用默认参数作为实参
 */
void fnt(int a = 10)
{
    printf("void fnt(int a = %d)\n", a);
}

int main(int argc, const char *argv[])
{
    fnt();
    fnt(1);
    return 0;
}