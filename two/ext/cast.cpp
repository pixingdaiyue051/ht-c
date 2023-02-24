/**
 * 1、隐式类型转换
 *      自动转换 一般是数据类型间的转换从小到大
 * 2、强制类型转换
 *      c++保留的c的强制类型转换方式 (int) xx
 *      static_cast
 *      dynamic_cast
 *      const_cast
 *      reinterept_cast
 */
#include <iostream>
using namespace std;

void cast()
{
    int a1 = 3;
    float f1 = a1 + 4;   // 存在向上的自动类型转换
    double d1 = f1 + a1; // 存在向上的自动类型转换
    cout << "a1=" << a1 << ",f1=" << f1 << ",d1=" << d1 << endl;

    // static_cast
    int a2 = static_cast<int>(4.53);
    cout << "a2=" << a2 << endl;

    // const_cast 脱除const
    const int o1 = 510;
    int *o2 = const_cast<int *>(&o1);
    int &o3 = const_cast<int &>(o1); // 转换非const
    *o2 = 2;
    cout << "o1=" << o1 << ",o2=" << *o2 << ",o3=" << o3 << endl;
    o3 = 4;
    cout << "o1=" << o1 << ",o2=" << *o2 << ",o3=" << o3 << endl;
}

int main(int argc, const char *argv[])
{
    cast();
    return 0;
}