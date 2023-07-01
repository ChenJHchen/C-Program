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
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("��������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("��������:>");
	scanf("%s", &(pc->data[pc->count].age));
	printf("�����Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("����绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�����ַ:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("���ӳɹ�\n");
}
void  ShowContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ�û����Ϣɾ��\n");
		return;
	}
	printf("������Ҫɾ��������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ������Ϣ������\n");
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
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ���Ϣ������\n");
		return;
	}
	
}