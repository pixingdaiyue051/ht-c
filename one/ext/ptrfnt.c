/**
 * 指向函数的指针
 * 主要用于传递函数回调 实现类似多态机制
 */
#include <stdio.h>

/**
 * 先定义指向函数指针类型 只要符合 int (int,int) 类型的函数都可以传入 method_fntptr
 */
typedef int (*comparebeyond)(int a, int b);

void method_fntptr(comparebeyond cb)
{
    printf("%d\n", cb(1, 0));
}

int cb(int c233, int vffh54)
{
    return 0;
}

int cberror0(int drr)
{
    return 1;
}

int cberror1(char drr)
{
    return 1;
}

char cberror2(int c233, int vffh54)
{
    return 1;
}

/**
 * 返回值是指针的函数
 * 仍然可以设计指向该函数的指针
 */
typedef char *(*compareptr)(char *s1, char *s2);

void method_fntptr1(compareptr cp)
{
    printf("%s\n", cp("da", "vds"));
}

char *cp0(char *vdfd, char *jllfs)
{
    return "0000";
}

char *cp1(char *ym54g, char *trhf)
{
    return "1111";
}

int main(int argc, const char *argv[])
{
    method_fntptr(cb);
    method_fntptr(cberror0);
    method_fntptr(cberror1);
    method_fntptr(cberror2);
    method_fntptr(NULL);
    method_fntptr1(cp0);
    method_fntptr1(cp1);
    return 0;
}