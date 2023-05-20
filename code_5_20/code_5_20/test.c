#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1 == arr2\n");
//	else
//		printf("arr1 != arr2\n");
//
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6};
//	int arr3[] = { 3,4,5,6,7};
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*p)[10] = &arr;
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	//printf("%d ", *(*p + i));
//	//}
//	return 0;
//}

//void pritnt1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//} 
//void pritnt2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", * (*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	pritnt2(arr,3,5);
//	return 0;
//}

//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", *pa);
//	int arr[5] = { 0 };*/
//	//int (*p)[5] = &arr;//数组指针 
//	//printf("%p\n", &Add);//函数地址
//	//printf("%p\n", Add);
//	//都是函数的地址
//	//int (*pf)(int x,int y) = &Add;
//	int (*pf)(int x, int y) = Add;
//	/*int ret = (*pf)(2, 3);*/
//	/*int ret = pf(2, 3);*/
//	int ret = Add(2, 3);
//
//	printf("%d\n", ret);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int (*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}