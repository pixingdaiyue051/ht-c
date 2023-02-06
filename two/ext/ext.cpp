#include <iostream>
#include <stdlib.h>
using namespace std;

void ext0()
{
}

enum BOOL
{
    FALSE,
    TRUE
};

/**
 * 
 */
void ext1()
{
    // const 作用于以后的变量类型不可变
    // 此时a和b都是不可变的
    const int a = 1;
    int const b = 2;
    // c++不能通过使用指针的形式间接修改const变量
    // int *pc = &a;
    // printf("%d\n", a);
    // *pc = 100;
    // printf("%d\n", a);

    // 此时*pm不可变 pm是指针本质上是内存上的地址仍然可变
    const int *pm = (int *)malloc(10);
    printf("%p,%d\n", pm, *pm);
    pm = &a;
    printf("%p,%d\n", pm, *pm);

    // c++扩充了bool类型 可以直接使用 并且可以赋值除true和false外其他整数
    bool b1 = true;
    printf("%d\n", b1);
	b1 = 21; // 此时会自动转变为false(0)或true(非0)
    printf("%d\n", b1);
	// int g1 = b1 * 4;
	// printf("%d\n", g1);

    // c++枚举是扩充类 只能赋值枚举内的数值
    BOOL b2 = FALSE;
    printf("%d\n", b2);
    // b2 = 21; // 无法赋值
	// int g2= b2 * 4;
	// printf("%d\n", g2);

	// 表达式可以赋值也可以被赋值
	int v1, v2;
	v1 = v2 = 100; // 等同于 v1 = (v2 = 100); 先对v2赋值 再将(v2 = 100)表达式的结果即v2赋值给v1
	(v1 = v2) = 50; // (v1 = v2)是一个表达式 现在对其结果即v1再赋值 一共完成了2次对v1的赋值 v2始终没变
	printf("%d,%d\n", v1, v2);
}

int main(int argc, const char *argv[])
{
    ext1();
    return 0;
}