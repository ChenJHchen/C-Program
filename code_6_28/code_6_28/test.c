#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////int main()
////{
////	int i = 1;
////	int sum = 0;
////L:if (i <= 10)
////{
////	sum = sum + i * i;
////	i++;
////	goto L;
////}
////printf("sum = %d\n", sum);
////	return 0;
////}
//
////int main()
////{
////	int  m = 0;
////	int n = 0;
////	int c = 0;
////	printf("������������:\n");
////	scanf("%d %d", &m, &n);
////L1:if (m == n)
////goto L2;
////if (m < n)
////{
////	c = m;
////	m = n;
////	n = c;
////
////}
////m = m - n;
////L2:printf("���ǵ����Լ��Ϊ��%d\n", m);
////	return 0;
////}
//
////int main()
////{
////	int i = 1;
////	int sum = 0;
////	while (i <= 10)
////	{
////		sum = sum + i * i;
////		i++;
////	}
////	printf("sum = %d\n", sum);
////	return 0;
////}
//
//
////int main()
////{
////	int i = 0;
////	int sum = 0;
////	while (scanf("%d", &i), i != 0)
////		sum = sum + i;
////	printf("sum = %d\n", sum);
////	return 0;
////}
//
//
////int main()
////{
////	int i = 0;
////	int sum = 0;
////	do
////	{
////		sum = sum + i;
////		i++;
////	} while (i <= 10);
////	printf("sum = %d\n", sum);
////	return 0;
////}
////
////#include<math.h>
////int main()
////{
////	int i = 0;
////	int sum = 0;
////	for (i = 1; i <= 10; i++)
////	{
////		sum = sum + i;
////	}
////	printf("sum = %d\n", sum);
////	return 0;
////}
//
//
//
//int main()
//{
//	int i = 0;
//	int s1 = 0;
//	int s2 = 0;
//	for (s1 = s2 = 0, i = 1; i < 100; i++)
//	{
//		if (i % 2 == 0)
//			s2 = s2 + i;
//		else
//		{
//			s1 = s1 + i;
//		}
//	}
//	printf("s1 = %d s2 = %d\n", s1, s2);
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <=4; i++)
//	{
//		for (j = 1; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = i; k >= 1; k--)
//		{
//			printf("#");
//		}
//			printf("\n");
//	
//	}
//	return 0;
//}
//#define N 6
//#define M 5
//int main()
//{
//	int i = 0;
//	int j = 0;
//	float g = 0;
//	float sum = 0;
//	float ave = 0;
//	for (i = 1; i <= N; i++)
//	{
//		sum = 0;
//		j = 1;
//		while (j <= M)
//		{
//			scanf("%f", &g);
//			sum = sum + g;
//			j++;
//		}
//		ave = sum / M;
//		printf("NO.%d ave = %6.2f\n", i, ave);
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	double k = 0;
//	scanf("%d", &n);
//	k = sqrt(n);
//	while (++i <= k)
//	{
//		if (n % i == 0)
//		{
//			printf("%d is not prime\n",n);
//
//			break;
//		}
//	}
//	if (i > k)
//	{
//		printf("%d is prime\n", n);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	char c = 0;
//	for (i = 0; i < 100; i++)
//	{
//		c = getchar();
//		if (c < '\0' || c> '9')
//			continue;
//		++sum;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum = sum + i * i;
//
//		printf("sum  = %d\n", sum);
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i <= 10)
//	{
//		sum = sum + i * i;
//		i++;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//		sum = sum + i * i;
//	printf("sum = %d\n", sum);
//	return 0;
//}

