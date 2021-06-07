#define _CRT_SECURE_NO_WARNINGS 1
//位段
#include<stdio.h>
 typedef struct S
{
	char a : 2;
	char b : 2;
	char c : 2;
	char d : 2;
}S;
int main()
{
	S s = { 0, 0, 0, 0 };
	s.a = 3;//观察内存中储存方式
	s.b = 1;
	s.c = 3;
	s.d = 1;
	printf("%d\n", sizeof(s));
	return 0;
}