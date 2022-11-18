/**
 * 计算字符串长度
 **/
int caculateStrLen(char *s)
{
	int r = 0;
	while (s[r++] != '\0')
		;
	return r;
}

/**
 * 比较两个字符串是否相等
 */
int compareStr(char *s1, char *s2)
{
	int len1 = caculateStrLen(s1);
	int len2 = caculateStrLen(s2);
	if(len1 != len2)
	{
		return 0;
	}
	int r2, i;
	for (i = 0; i < len1 - 1; i++)
	{
		r2 = *(s1 + i) == *(s2 + i);
		if (!r2)
		{
			return 0;
		}
	}
	return 1;
}