#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define Max_name 10
#define Max_sex 5
#define Max_num 11
#define Max_addr 10
#define Max_contact_num 1000
int Now_contact_num =0;

struct contact
{
	char name[Max_name];
	char sex[Max_sex];
	char num[Max_num];
	char addr[Max_addr];
}contacter[Max_contact_num];

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
void ADDTION()//添加  获取当前数量  判断是否越界   没有越界则添加新的用户数据
{
	if (Now_contact_num >= Max_contact_num)
	{
		printf("越界");
	}
	else
	{
		contacter[Now_contact_num] = {"1","1","1","1"};  //用户输入讯息
		printf("Done\n");
		printf("ID = %d Name : %s \n Sex: %s  Number :%s ", Now_contact_num,
			                       contacter[Now_contact_num].name,
								   contacter[Now_contact_num].sex,
								   contacter[Now_contact_num].num);

		//添加用户代码

		Now_contact_num++;
	}


}
void DELETE()//删除
{

}
void REVISE()//修改
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
		printf("exit");
		break;
	}
}