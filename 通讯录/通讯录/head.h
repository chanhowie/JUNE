#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define Max_name 10
#define Max_sex 5
#define Max_num 11
#define Max_addr 10
#define Max_contact_num 100

struct peoinfo
{
	char name[Max_name];
	char sex[Max_sex];
	char num[Max_num];
};
int menu(int* input);
struct Contact
{
	struct  peoinfo data[Max_contact_num];
	int size;
};
void initcon(struct Contact* con);
void ADDTION(struct Contact* con);
void DELETE(struct Contact* con);
void show();
