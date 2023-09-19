#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int test(int x)
//{
//	x = 1024;
//	printf("调用test函数内部 x = %d\n", x);
//
//}
//int main()
//
//{
//	int x = 1;
//	printf("调用test前 x = %d\n", x);
//	test(x);
//	printf("调用test后 x = %d\n", x);
//
//	return 0;
//}


//void test(int* x)
//{
//	 *x = 1024;
//	printf("调用test函数内部 x = %d\n", *x);
//
//}
//int main()
//
//{
//	int x = 1;
//	printf("调用test前 x = %d\n", x);
//	test(&x);
//	printf("调用test后 x = %d\n", x);
//
//	return 0;
//}


//#define MaxSize 10;
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}Sqlist;
//void Initlist(Sqlist *L)
//{
//	for (int i = 0; i < MaxSize;i++)
//		L->data[i] = 0;
//	L->length = 0;
//}
//
//#define Maxsize 10
//
//typedef struct
//{
//	int data[Maxsize];
//	int length;
//}Sqlist;
//void InitList(Sqlist *L)
//{
//	for (int i = 0; i < Maxsize; i++)
//	{
//		L->data[i] = 0;
//		L->length = 0;
//	}
//}
//int main()
//{
//	Sqlist L;
//	Initlist(&L);
//	return 0;
//}

//
//#define Maxsize 10
//
//typedef struct
//{
//	int data[Maxsize];
//	int length;
//}Sqlist;
//void InitList(Sqlist* L)
//{
//	for (int i = 0; i < Maxsize; i++)
//	{
//		L->data[i] = 0;
//		L->length = 0;
//	}
//}
//int main()
//{
//	Sqlist L;
//	InitList(&L);
//	return 0;
//}


#include<stdlib.h>
//#define InitSize 10
//typedef struct
//{
//	int* data;
//	int MaxSize;
//	int length;
//}Seqlist;
//void InitList(Seqlist *L)
//{
//	L->data = (int*)malloc(InitSize * sizeof(int));
//	L->length = 0;
//	L->MaxSize = InitSize;
//}
//void IncreaseSize(Seqlist *L,int len)
//{
//	int* p = L->data;
//	L->data = (int*)malloc(L->MaxSize + len * sizeof(int));
//	for (int i = 0; i < L->length; i++)
//	{
//		L->data[i] = p[i];
//	}
//	L->MaxSize = L->MaxSize + len;
//	free(p);
//}
//int main()
//{
//	Seqlist L;
//	InitList(&L);
//	IncreaseSize(&L, 5);
//	return 0;
//
//}



#define MaxSize 10
typedef struct
{
	int data[MaxSize];
	int length;
}Sqlist;
void Initlist(Sqlist *L)
{
	for (int i = 0; i < MaxSize;i++)
		L->data[i] = 0;
		L->length = 0;
}
void ListInsert(Sqlist* L,int i,int e)
{
	for (int j = L->length; j >= i; j--)
		L->data[i] = L->data[i - 1];
		L->data[i - 1] = e;
		L->length++;
}
int main()
{
	Sqlist L;
	Initlist(&L);
	ListInsert(&L, 3, 3);
	return 0;
}