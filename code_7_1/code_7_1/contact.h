#pragma once

#include<string.h>
#include<stdio.h>
#include<assert.h>
#define Max 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


typedef struct Contact
{
	PeoInfo data[100];
	int count;
}Contact;


void InitContact(Contact * pc);//初始化

void AddContact(Contact* pc);//增加
void ShowContact(Contact* pc);

void DelContact(Contact* pc);
void SerachContact(Contact* pc);

