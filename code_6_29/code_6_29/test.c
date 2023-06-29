#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i < 10; i++)
//		for (j = 0; j < 10; j++)
//			for(k=0;k<10;k++)
//		{
//			if (i == j || j == k || k == i)
//				continue;
//			if ((100 * i + 10 * j + k) % 4 == 0)
//			{
//				printf("%4d", 100 * i + 10 * j + k);
//				goto L1;
//			}
//		}
//	L1:;
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int n = 0;
//	while (c<=20)
//	{
//		b = 1;
//		while (b < c)
//		{
//			for (a = 1; a <= b; a++)
//				if (a * a + b * b != c * c)
//					continue;
//				else
//				{
//					printf("(%d %d %d)", a, b, c);
//					n++;
//					if (n % 3 == 0)
//						printf("\n");
//				}
//			b += 1;
//		}
//		c += 1;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	float k = 0;
//	float s = 0;
//	float m = 1;
//	float n = 2;
//	for (i = 1; i <= 10; i++)
//	{
//		s += m / n;
//		k = m + n;
//		m = n;
//		n = k;
//	}
//	printf("s = %f", s);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	for (n = 100; n <= 999; n++)
//	{
//		i = n / 100;
//		j = n / 10 % 10;
//		k = n % 10;
//		if (n == (i * i * i + j * j * j + k * k * k))
//			printf("%d\n", n);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 0;
//	double f = 2;
//	double t = 1;
//	double s = 0;
//	scanf("%d", &n);
//	while (i<=n)
//	{
//		s = s + t;
//		t = 1;
//		j = 0;
//		while (j<=i)
//		{
//			t = t * f;
//			f++;
//			j++;
//		}
//		i++;
//	}
//	printf("s = %lf\n", s);
//	return 0;
//}

