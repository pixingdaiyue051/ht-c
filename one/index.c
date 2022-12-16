#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define N 10
#define FNT(n) n * 21
#define ADD(a, b) (a + b)
#define SUB(a, b) (a - b)
#define MUT(a, b) (a * b)
#define DIV(a, b) (a / b)

#define MAX(a, b)                      \
	(                                  \
		{                              \
			typeof(a) _a = a;          \
			typeof(a) _b = b;          \
			(void)(&_a == &_b);        \
			(_a) > (_b) ? (_a) : (_b); \
		})

/**
 *  利用宏定义代替函数实现
 *  由于宏定义在代码编译阶段是简单代码片段替换 某些情况下会比使用函数更高效
 **/
void def()
{
	float a1 = ADD(3.1, 4.6);
	float a2 = SUB(6.2, 9.4);
	float a3 = MUT(3.0, 4.9);
	float a4 = DIV(6.1, 1.6);
	printf("%f,%f,%f,%f\n", a1, a2, a3, a4);

	int a = 1;
	int b = 3;
	int c = MAX(a, b++);
	printf("%d,%d,%d\n", a, b, c);

	float num = 9.1F;
	long lo = *(long *)&num;

	printf("%ld\n", lo);
}

/**
 *  输出错误内容
 **/
void err()
{
	FILE *pf;
	pf = fopen("/data/c_test/test.txt", "rb");
	if (pf == NULL)
	{
		perror("err num");
		fprintf(stderr, "fail to open file: %s\n", strerror(errno));
		exit(1);
	}
	fclose(pf);
}

/**
 * scanf返回值代表匹配的数值个数0则表示没有匹配输入
 **/
void inope0()
{
	int n;
	int v = scanf("%d", &n);
	printf("%d,%d\n", n, v);
	// 清空缓冲区 scanf默认不会清除回车符
	while (getchar() != '\n')
		;
}

/**
 * 输出所有的命令行的输入参数
 * argc 输入的参数个数 包括程序命令本身 所以argc>=1
 * argv 输入的参数以二维数组形式存储
 * 		argv 类型是char ** 一个指向指针的指针
 * 		argv 表示存放二维数组地址的地址
 * 		*argv 既是argv地址指向内存的存放内容也是二维数组第一个元素的地址
 * 		**argv 即二维数组第一个元素内容
 **/
void inope(int argc, char *argv[])
{
	int i, j;
	printf("argument counts:%d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%d.%p%9s\n", i, argv[i], argv[i]);
		// printf("%d.%p%9s\n", i, argv + i, *(argv + i));
		for (j = 0; j < strlen(argv[i]); j++)
		{
			printf("%p,%c\n", &argv[i][j], argv[i][j]);
			// printf("%p,%c\n", argv[i] + j, *(argv[i] + j));
		}
	}
}

void test()
{
	puts("hello world");
	putchar(65);
	putchar('a');
	putchar('\n');

	int c = 0;
	if(c) // 0以外都是true
	{
		puts("true");
	}

	short h1 = 10 & 2;
	short h2 = 10 | 2;
	short h3 = 10 ^ 2;
	short h4 = ~2;
	printf("与:%d\n", h1);
	printf("或:%d\n", h2);
	printf("异或:%d\n", h3);
	printf("非:%d,%hu\n", h4, h4);
}

int main(int argc, const char *argv[])
{
	test();
	// def();
	// err();
	// inope(argc, argv);
	return 0;
}