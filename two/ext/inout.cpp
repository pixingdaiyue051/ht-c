/**
 * c++ 输入输出
 */
#include <iostream>
#include <bitset>
using namespace std;

void outope()
{
    // 默认按照十进制显示
    cout << 1024 << endl;
    cout << 0b010000000000 << endl;
    cout << 02000 << endl;
    cout << 0x400 << endl;

    cout << bitset<16>(0b010000000000) << endl;
    cout << oct << 02000 << endl;
    cout << hex << 0x400 << endl;
}

/**
 * 避免使用c当中不安全的输入方式
 * 1.使用字符串代替字符数组
 */
void inope()
{
    int num, data;
    cin >> num >> data; // 按照空格依次获取输入赋值num和data
    cout << "num=" << num << ",data=" << data << endl;

    string str;
    cin >> str; // 可以最大输入str.max_size()字符
    cout << "string max len = " << str.max_size() << endl;
    cout << str << endl;
}

int main(int argc, const char *argv[])
{
    outope();
    inope();

    // system("pause");
    return 0;
}