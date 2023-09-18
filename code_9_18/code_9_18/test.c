#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//int my_strlen(char *str)
//{
//	//int count = 0;
//	//while(*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * 1;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	 int a = 1;
//	 int b = 1;
//	 int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%2 == 0)
//		sum-= 1.0 / i;
//		else
//			sum += 1.0 / i;
//
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i <10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//			
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 1; i <=10; i++)
//	{
//		printf("arr[i] = %d\n",i);
//	}
//
//	return 0;
//}


//int main()
//{
//	float h;
//	float w;
//	float area;
//	h = 10.5;
//	w = 20.5;
//	area = h * w;
//	printf("%6.2f\n", area);
//	return 0;
//}

//double area(double h,double w)
//{
//	double s = 0.0;
//	s = h * w;
//	return s;
//}
//int main()
//{
//	double h1 = 0.0;
//	double h2 = 0.0;
//	double w1 = 0.0;
//	double w2 = 0.0;
//	double s1 = 0.0;
//	double s2 = 0.0;
//	h1 = 10.5;
//	w1 = 20.5;
//	h2 = h1 * 1.5;
//	w2 = w1 * 1.5;
//	s1 = area(h1, w1);
//	s2 = area(h2, w2);
//	printf("area = %6.2f\n", s1 + s2);
//
//	
//
//	return 0;
//	
//}


//int main()
//{
//	float r = 0;
//	float s = 0;
//	r = 15.5;
//	s = 3.14 * 2 * r;
//	printf("r = %4.2f,s = %4.2f", r, s);
//	return 0;
//}