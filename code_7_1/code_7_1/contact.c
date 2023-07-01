#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == Max)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("输入名字:>");
	scanf("%s", pc->data[pc->count].name);
	printf("输入年龄:>");
	scanf("%s", &(pc->data[pc->count].age));
	printf("输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("输入地址:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("增加成功\n");
}
void  ShowContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%5d\t%5s\t%12s\t%30s\n", pc->data[i].name,
											   pc->data[i].age,
			                                   pc->data[i].sex,
			                                   pc->data[i].tele,
			                                   pc->data[i].addr);
	}
}

static int FindByName(Contact* pc,char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息删除\n");
		return;
	}
	printf("请输入要删除的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的信息不存在\n");
		return;
	}
	for (i = pos; i < pc ->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	

}

void SerachContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的信息不存在\n");
		return;
	}
	
}