#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖmemcpy
#include<stdio.h>
#include<assert.h>
void* mymemcpy(void* dest, void* src, int num)
{
	assert(dest);
	assert(src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}
int main()
{
	char arr1[] = { "abcde" };
	char arr2[6] = { 0 };
	mymemcpy(arr2, arr1, sizeof(arr1));
	return 0;
}