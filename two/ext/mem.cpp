/**
 * 内存的分配与销毁 new/delete  malloc/free
 */
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void memc()
{
    char *p = (char *)malloc(4); // 创建并分配内存 分配连续的32个字节 一旦使用超出32字节程序就会崩溃
    strcpy(p, "123456781234567812345678");
    printf("%d,%d,%s\n", sizeof(int), sizeof(*p), p);
    free(p); // 销毁
}

void memcpp()
{
    char *p = new char('m'); // 创建并分配内存
    strcpy(p, "12345678");
    printf("%d,%d,%s\n", sizeof(char), sizeof(*p), p);
    delete p; // 销毁

    char *p1 = new char[4]; // 创建数组
    delete []p1;
}

int main(int argc, const char *argv[])
{
    // memc();
    memcpp();
    system("pause");
    return 0;
}