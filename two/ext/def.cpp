/**
 * 1、形参 实参 默认参数
 */
#include <iostream>
using namespace std;

/**
 * 形参可以设置一个默认参数 当没有参数传入时就使用默认参数作为实参
 * 一定程度上破坏了多态
 */
void fnt(int a = 10)
{
    printf("void fnt(int a = %d)\n", a);
}

int main(int argc, const char *argv[])
{
    fnt();
    fnt(1);
}