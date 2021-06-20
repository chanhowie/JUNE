#define _CRT_SECURE_NO_WARNINGS 1
//柔性数组的另一种方式
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* s = (struct S*)malloc(sizeof(struct S));
	s->arr = malloc(10 * sizeof(int));
	int i = 0;
	for (i; i < 10; i++)
	{
		s->arr[i] = i;
		printf("%d", s->arr [i]);
	}
	int* p = realloc(s->arr, 20 * sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		s->arr = p;
		for (i = 0; i < 20; i++)
		{
			s->arr[i]=i;
			printf("%d", s->arr[i]);
		}	
		p = NULL;
		free(s->arr);
		s->arr = NULL;
		free(s);
		s = NULL;
	}
	return 0;
}