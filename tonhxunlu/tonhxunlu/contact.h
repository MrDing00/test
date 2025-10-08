#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>;
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//类型的声明
//
//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录
typedef struct Contact
{
	PeoInfo date[MAX];//存放人的信息
	int count;//记录当前通讯录中实际人的个数
} Contact;

//初始化
void InitContact(Contact* pc);

//增加
void AddContact(Contact* pc);
//显示
void ShowContact(const Contact*pc);
//删除
void DelContact(Contact* pc);
//查找
void SearchContact(Contact* pc);
//修改
void ModifyContact(Contact*pc);
//排序
//按照什么来排序
void SortContact(Contact*pc);
