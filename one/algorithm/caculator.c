#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_stack.h"
#include "../ext/dbg.h"

/**
 * 获得操作符优先级
 **/
int priority(char c)
{
	switch (c)
	{
	case '+':
		return 1;
	case '-':
		return 2;
	case '*':
		return 3;
	case '/':
		return 4;
	default:
		return 0;
	}
}

/**
 * 不同操作符 不同计算
 **/
double caculate0(char c, double a, double b)
{
	switch (c)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b * 1.0f;
	case '/':
		return a * 1.0f / b;
	default:
		return 0.0;
	}
}

/**
 *  c 当前输入的字符
 *  c_top 当前栈顶操作符
 **/
void recrusive(char c, char c_top)
{
	// 当前空栈 直接入栈
	if ('_' == c_top)
	{
		ope_push(c);
		return;
	}
	int p = priority(c);
	int p_c_top = priority(c_top);
	if (p > p_c_top)
	{
		ope_push(c);
		return;
	}
	// 输入的优先级小于或等于栈顶 出栈计算再入栈
	char c1 = ope_pop();
	double b = dd_pop();
	double a = dd_pop();
	dd_push(caculate1(c1, a, b));
	recrusive(c, ope_peek());
}

int is_ope(char c)
{
	return c == 42 || c == 43 || c == 45 || c == 47;
}

/**
 * 运算主逻辑
 * 42 *
 * 43 +
 * 45 -
 * 47 /
 **/
double caculate(char *s)
{
	ls_t *stack_num = ls_init();
	ls_t *stack_ope = ls_init();

	int i = 0;
	_ht_check(is_ope(s[i]), "必须以操作数开始");
	int len = strlen(s);
	int tmp1 = tmp2 = 1; // 记录先后两个操作符的位置 用于判断是否是连接操作数以及截取操作数
	char tmp_c;
	for (i = 1; i < len; i++)
	{
		_ht_check(tmp2 - tmp1 != 1, "第%d %d格连续输入两个操作符", tmp2 + 1, tmp1 + 1); // 检查是否连续两个操作符
		tmp1 = tmp2;																	// 将上次记录的操作符位置设置给tmp1
		tmp_c = s[i];
		// 操作符入栈
		if (is_ope(tmp_c))
		{
			tmp2 = i;
			mem
			ls_push(stack_ope, tmp_c);
			continue;
		}
		// 操作数入栈
	}

	ls_free(stack_num);
	ls_free(stack_ope);
_ht_error:
	ls_free(stack_num);
	ls_free(stack_ope);
	return 0.0f;
}