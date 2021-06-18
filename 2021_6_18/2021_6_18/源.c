#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Getmem(char**p)
{
	*p = (char*)malloc(100);
}char* Getmem_1(char*p)
{
	p = (char*)malloc(100);
	return p;
}
void test(void)
{
	char*str = NULL;
	str = Getmem_1(&str);//方式1
	Getmem(&str); //方式2

	strcpy(str, "hello,world");
	printf(str);
}
int main()
{
	test();
	return 0;
}