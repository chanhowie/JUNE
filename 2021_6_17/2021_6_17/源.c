#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int *p = malloc(10 * sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	
	int *op = calloc(10, sizeof(int));

	int *rep = realloc(op, 20 * sizeof(int));
	if (rep != NULL)
	{
		return 0;//Ê§°Ü
	}
	else
	{
		p = rep;
	}


	free(op);
	op = NULL;

	
}