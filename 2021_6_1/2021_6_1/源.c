#define _CRT_SECURE_NO_WARNINGS 1
//���ַ�ת����Сд��Ȼ���и����
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char arr[] = { "chANh@owIe@qQ.cOm" };
	char* p = "@.";
	int i = 0;
	while (arr[i]!=0)
	{
		if (islower(arr[i]) != 0)
			arr[i] = toupper(arr[i]);
		i++;
	}
	char* ret = NULL;
	for (ret = strtok(arr, p); ret!=NULL; ret = strtok(NULL, p))
		printf("%s\n", ret);
	return 0;
}