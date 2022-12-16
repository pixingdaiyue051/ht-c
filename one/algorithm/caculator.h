#ifndef _HEAD_CACULATOR
#define _HEAD_CACULATOR

/**
 * 获得操作符优先级
 **/
int priority(char c);

/**
 * 不同操作符 不同计算
 **/
double caculate0(char c, double a, double b);

/**
 * 运算主逻辑
 **/
double caculate(char *s);

#endif