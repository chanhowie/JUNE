#define _CRT_SECURE_NO_WARNINGS 1
//柔性数组
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
struct S
{
	int n;
	int arr[];
};
int main()
{
	struct S* s;
	s = malloc(sizeof(s) + 5 * sizeof(int));//申请内存为4+5*4
	int size = sizeof(s) + 5 * sizeof(int);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		s->arr[i] = i;
	}
	//更新内存大小
	size = sizeof(s) + 10 * sizeof(int);
	struct S* p = realloc(s, sizeof(s) + 10 * sizeof(int));//更新申请内存为4+10*4
	if (p != NULL)
	{
		s = p;
		for (i = 5; i < 10; i++)
		{
			s->arr[i] = i;
		}
	}	
	else
	{
		printf("%s", strerror(errno));
	}
	return 0;
}