#define _CRT_SECURE_NO_WARNINGS 1
//枚举常量 通过联合体测试计算机中大小端
#include<stdio.h>
union is
{
	int i;
	char b;
}is_big;
enum color
{
	RED,
	GREEN,
	BLUE
};
int main()
{
	enum color t_shirt=BLUE;
	is_big.i = 1;
	if (is_big.b == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}