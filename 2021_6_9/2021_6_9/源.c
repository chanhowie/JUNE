#define _CRT_SECURE_NO_WARNINGS 1
//nλ���ֵ�ȫ����
#include<stdio.h>
int main()
{
	//��3λ����ʼ
	//3λ����ȫ����  ��123
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
		//����box �д𰸵�����
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