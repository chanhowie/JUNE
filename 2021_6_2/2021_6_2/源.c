#define _CRT_SECURE_NO_WARNINGS 1
//memcpy ÄÚ´æ¿½±´
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr2[10] = { 0 };
	memcpy(arr2, arr1, sizeof(arr1));
	struct MyStruct
	{
		char name[10];
		int age;
	};
	struct MyStruct a = { "chen", 21 };
	struct MyStruct b ;
	memcpy( &b,  &a, sizeof(struct MyStruct));
	return 0;
}