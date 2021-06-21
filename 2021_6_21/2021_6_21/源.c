#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//struct str
//{
//	int len;
//	char s[0];
//};
//struct foo 
//{
//	struct str *a;
//};
//int main() 
//{
//	struct foo f = {0};
//	f.a = malloc(sizeof(struct str) + 8);
//	if (f.a->s) 
//	{
//		printf(f.a->s);
//	}
//	return 0;
//}
struct test
{
	
	short c;
	char *p;
	char s[10];
	int i;
};
int main(){
	struct test *pt = NULL;
	printf("&i = %p\n", &pt->i); 
	printf("&c = %p\n", &pt->c);
	printf("&p = %p\n", &pt->p);
	printf("&s = %p\n", pt->s); 
	return 0;
}