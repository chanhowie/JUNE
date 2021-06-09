#define _CRT_SECURE_NO_WARNINGS 1
//n位数字的全排列
#include<stdio.h>
int main()
{
	//从3位数开始
	//3位数的全排列  如123
	//123 132 213 231 312 321
	int num = 123;
	int i = 0;
	int num_i[10] = { 0 };
	do
	{
		num_i[i] = num % 10;
		num=num / 10;
		i++;
	} while (num>0);

	int box[100] = {0};
	
	int k = 0;
	{
		//增加box 中答案的数量
		i = 0;
		while (num_i[i] != 0)
		{
			box[k] = box[k] * 10 + num_i[i];
			i++;
		}
		k++;
	}
	return 0;
}