#define _CRT_SECURE_NO_WARNINGS 1
//结构体的初始化函数
#include<stdio.h>
#include<string.h>
struct node
{
	char name[5];
	int  age;
};
void init(struct node* p)
{
	p->age = 10;
	strcpy(p->name, "chan");
}
int main()
{
	struct node a;
	init(&a);
	return 0;
}