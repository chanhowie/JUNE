#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体的使用以及结构体中嵌套结构体
struct T
{
	double weight;
	short age;
};

struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};

int main()
{
	struct S s = { 't', {100.50,20}, 100, 3.1415926, "timi" };
	printf("%c %d %lf %s\n",s.c, s.a, s.d, s.arr);
	printf("%lf\n", s.st.weight);


	return 0;
}

