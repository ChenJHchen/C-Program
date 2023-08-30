#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ",i);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//		
//	printf("%d %d %d\n", a, b, c);
//	
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//
//}



//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}



//int main()
//{
//	int m = 0;
//	int n = 0;

//	int t = 0;
//	while (m%n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y% 4 == 0 && y % 100 != 0 || y %400 == 0)
//		{
//			printf("%d ", y);
//
//			count++;
//	
//		}
//		
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}if (i == j)
//		{
//			printf("%d ", i);
//		}
//
//
//	}
//	return 0;
//}


#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//
//	}
//	return 0;
//}

//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("输入我是猪，取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}