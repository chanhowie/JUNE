#define _CRT_SECURE_NO_WARNINGS 1
//ö�ٳ��� ͨ����������Լ�����д�С��
#include<stdio.h>
union is
{
	int i;
	char b;
}is_big;
enum color
{
	RED,
	GREEN,
	BLUE
};
int main()
{
	enum color t_shirt=BLUE;
	is_big.i = 1;
	if (is_big.b == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}