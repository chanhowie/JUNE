#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��memmove���Ż���
#include<stdio.h>
void* mymemmove(void* dest, void* src, int k)
{
	void* ret = dest;
	if (dest > src)//Ŀ�ĵ��ں���
	{
		int distance = (int*)dest - (int*)src;
		for (k;k>0;k--)
		{
			*((int*)dest + distance) = *((int*)dest);
			--(int *)dest;
		}
		return ret;
	}
	else
	{
		int distance = (int*)src - (int*)dest;
		for (k; k>0; k--)
		{
			*((int*)src - distance) = *((int*)src);
			++(int *)src;
		}
		return ret;
	}
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	//	mymemmove(arr1 + 5, arr1 + 3, 3);    //Ŀ�ĵ��ں������
	//	mymemmove(arr1 + 2, arr1 + 4, 3);    //Ŀ�ĵ���ǰ�����
	return 0;
}