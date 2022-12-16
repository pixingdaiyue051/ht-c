/**
 * 输入输出
 */
#include <stdio.h>
#include "dbg.h"

void outope()
{
    // 普通输出 向stdout输出 即显示器
    printf("%s %lu\n", "fss", 5324);

    FILE *f = fopen("/data/c_test/test.txt", "w");
    _ht_check(f, "failed to open file");

    // 指定输出到具体的文件设备(linux一切皆文件)
    fprintf(f, "%s %lu\n", "fss", 5324);

_ht_error:
    if (f)
        fclose(f);
}

void inope()
{
    // 普通输入 从stdin输入 即键盘
    char c;
    scanf("%c", &c);

    FILE *f = fopen("/data/c_test/test.txt", "r");
    _ht_check(f, "failed to open file");
    fscanf(f, "%c", &c);

    printf("%c\n", c);

    // // 从缓冲区获取一个字符串
    // char c = getchar();
    // printf("0 %c\n", c);
    // c = getchar();
    // printf("1 %c\n", c);
    // c = getchar();
    // printf("2 %c\n", c);
    // c = getchar();
    // printf("3 %c\n", c);

_ht_error:
    if (f)
        fclose(f);
}

int main(int argc, const char *argv[])
{
    // outope();
    inope();

    return 0;
}