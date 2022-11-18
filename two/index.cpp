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
 *  
 */
void inope()
{
    int num, data;
    cin >> num >> data;
    cout << "num=" << num << ",data=" << data << endl;
}

int main(int argc, char const *argv[])
{

    cout << "hello world" << endl;
    inope();
    
    // system("pause");
    return 0;
}