#include <stdio.h>

/**
 * 计算字符串长度 实现strlen
 **/
int caculateStrLen(char *s)
{
	if (s == NULL)
	{
		return 0;
	}
	int r = 0;
	while (s[r++] != '\0')
		;
	printf("%s len:%d\n", s, r - 1);
	return r - 1;
}

/**
 * 比较两个字符串是否相等 实现strcmp
 */
int compareStr(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return 0;
	}
	if (s1 == NULL && s2 == NULL)
	{
		return 1;
	}
	int len1 = caculateStrLen(s1);
	int len2 = caculateStrLen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	int r2, i = 0;
	for (; i < len1; i++)
	{
		r2 = *(s1 + i) == *(s2 + i);
		printf("%c,%c,%d\n", *(s1 + i), *(s2 + i), r2);
		if (!r2)
		{
			return 0;
		}
	}
	return 1;
}

/**
 * 将字符串转换成数字 实现atoi
 */
int transferStr2Int(char *s)
{
	int len = caculateStrLen(s);
	if (len == 0)
	{
		return 0;
	}
	int i = 0, tmp1 = 1, tmp, r = 0;
	for (; i < len; tmp1 = (i++) + 1)
	{
		tmp = *(s + i) - 48; // 0的asc码是48
		if (tmp < 0 || tmp > 9)
		{
			return 0;
		}
		for (; tmp1 < len; tmp1++) // 循环乘10 模拟幂运算 乘法即二进制的逐位或加运算
		{
			tmp *= 10;
		}
		r += tmp;
	}

	return r;
}