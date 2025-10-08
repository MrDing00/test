#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "contact.h"

void menu()
{
	printf("-------------------------\n");
	printf("-----1.增加---2.删除-----\n");
	printf("-----3.查找---4.修改-----\n");
	printf("-----5.显示---6.排序-----\n");
	printf("----------0.退出---------\n");
	printf("-------------------------\n");

}

int main()
{
	int input = 0;
	
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
		{
			AddContact(&con);
			break;
		}
		case 2:
		{
			DelContact(&con);
			break;
		}
		case 3:
		{
			SearchContact(&con);
			break;
		}
		case 4:
			ModifyContact(&con);
		{
			break;
		}
		case 5:
		{
			ShowContact(&con);
			break;
		}
		case 6:
		{
			SortContact(&con);
			break;
		}
		default:
		{
			printf("输入错误");
			break;
		}
		}

	} while (input);

	return 0;
}


