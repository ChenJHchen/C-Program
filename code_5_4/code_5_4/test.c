#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int count_numof1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int count_numof1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_numof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n &(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_numof1(num);
//	printf("%d\n", n);
//	return 0;
//}

//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i)& 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//		
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//					
//				}
//
//				else if (i + j == n - 1)
//				{
//					printf("*");
//					
//				}
//
//				else
//				{
//					printf(" ");
//					
//				}
//			}
//			printf("\n");
//
//			
//		}
//	}
//	return 0;
//}
//
//
