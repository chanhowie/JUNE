#include<stdio.h>
#include<string.h>


int menu()
{
	int input = 0;
	printf("**************************************\n");
	printf("****************CONTACT***************\n");
	printf("*****1 ADDTION************2 DELETE****\n");
	printf("*****3 REVISE*************4 EXIT******\n");
	printf("**************************************\n");
	scanf("%d", &input);
	return input;
}
void ADDTION()//���
{

}
void DELETE()//ɾ��
{

}
void REVISE()//�޸�
{

}
void first_page()
{
	switch (menu())
	{
	case 1:
		ADDTION();
		break;
	case 2:
		DELETE();
		break;
	case 3:
		REVISE();
		break;
	case 4:
	default:
		break;
	}
}