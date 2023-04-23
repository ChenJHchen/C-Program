#define _CRT_SECURE_NO_WARNINGS

//函数
#include<stdio.h>
//int get_max(int x,int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max is %d\n" ,max);
//	return 0;
//}


//void swap1(int x,int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//void swap2(int* px,int* py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	swap1(num1, num2);
//	printf("交换后：num1  is %d nun2 is %d\n", num1, num2);//形参实例化之后其实相当于实参的一份临时拷贝
//	swap2(&num1, &num2);
//	printf("交换后：num1  is %d nun2 is %d\n", num1, num2);//形参实例化之后其实相当于实参的一份临时拷贝
//
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//int Strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fac(n);
//	printf("%d", ret);
//	
//	return 0;
//}


//第n个斐波那契数


//int count = 0;
//int fib(int x)
//{
//	if (x== 3)
//		count++;
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	printf("%d\n", count);
//
//	return 0;
//}


//非递归 n阶层

//int fac(int x)
//{
//	int result = 1;
//	while (x>1)
//	{
//		result = result * x;
//		x--;
//	}
//	return result;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fac(n);
//	printf("%d", ret);
//	return 0;
//}


//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
