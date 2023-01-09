#include <stdio.h>
#include "mystr.h"
#include <ctype.h>
#include <string.h>

void ext0()
{
	short h = 3;
	int i = 100;
	long l = 1L * 1024L * 1024L * 1024L;
	float f = 3.14156f;
	double d = 1911.11;
	char c = 65;
	printf("size of short:%lu,h=%hd\n", sizeof(short), h);
	printf("size of int:%lu,i=%d\n", sizeof(int), i);
	printf("size of long:%lu,l=%ld\n", sizeof(long), l);
	printf("size of float:%lu,f=%f\n", sizeof(float), f);
	printf("size of double:%lu,d=%lf\n", sizeof(double), d);
	printf("size of char:%lu,c=%c\n", sizeof(char), c);

	int ui = -100;
	long ul = -100;
	short us = -100;
	printf("%hu,%u,%lu\n", us, ui, ul);
	printf("%hd,%d,%ld\n", us, ui, ul);

	char nul = '\b';
	double r = d * nul;
	printf("r=%.3lf%%\n", r);

	char s[] = "i am the king of the world";
	char *p = "of course i still love you";
	printf("size of s:%lu,s=%s\n", sizeof(s), s);
	printf("size of p:%lu,p=%p\n", sizeof(p), p);

	int area[] = {10, 20, 30, 40, 50};
	char name[] = "jack";
	char name1[] = {'j', 'a', 'c', 'k', '\0'};
	area[1] = name[4];
	name[4] = 'r';
	printf("size of area:%ld\n", sizeof(area));
	printf("numbers of area:%ld\n", sizeof(area) / sizeof(int));
	printf("elements in area:%d,%d,%d\n", area[0], area[1], area[10]);
	printf("size of name:%ld,%ld\n", sizeof(name), sizeof(name1));
	printf("elements in name:%c,%c,%c\n", name[0], name[1], name[10]);
	printf("name:%s,name1:%s\n", name, name1);
}

void test0()
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

void test1()
{
	char ch = 88;
	int r1 = isalpha(ch);
	printf("%c is alpha:%d\n", ch, r1);
	int r2 = isblank(ch);
	printf("%c is blank:%d\n", ch, r2);
	int r3 = toupper(ch);
	printf("%c uppercase is:%c\n", ch, r3);
	int r4 = tolower(ch);
	printf("%c lowercase is:%c\n", ch, r4);

	char *str = "kl86g65";
	int r5 = strlen(str);
	printf("%s length is:%d\n", str, r5);
	int r6 = ht_str_len(str);
	printf("%s length is:%d\n", str, r6);
	int r7 = ht_str_cmp("NUL1", "NULL");
	printf("compared is %d\n", r7);
	int r8 = ht_str_2int("45264");
	printf("transfer to %d\n",  r8);
}

int main(int argc, const char *argv[])
{
	// ext0();
	test1();

	return 0;
}