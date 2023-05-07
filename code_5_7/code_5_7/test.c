#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int my_strlen(const char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len); 
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && a == c)
//			{
//				printf("等边\n");
//			}
//			else if ((a == b && b!=c )|| (a == c )&& (c!=b) ||( b == b) && (b!=a))
//			{
//				printf("等腰\n");
//			}
//			else
//			{
//				printf("普通三角\n");
//			}
//		}
//		else
//		{
//			printf("不是三角\n");
//		}
//	}
//		return 0;
//}
//	


//void print(int* p,int* sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//int main()
//{
//	char arr[100001] = { 0 };
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/ 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//			{
//				printf("%d ", i);
//			}
//
//		
//
//	}
//	return 0;
//}


//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j <2*(line - 1-i)-1; j++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//喝汽水问题  printf("%d\n",2*money-1) 
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}