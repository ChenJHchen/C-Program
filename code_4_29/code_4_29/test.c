#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int num1 =-7 ;
//	int num2=num1>> 1;
//	printf("%d", num2);
//
//	return 0;
//
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("交换前：a = %d，b= %d", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d，b= %d", a, b);
//
//	return 0;
//}


// 错误代码
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		a = a >> 32;
//		if ((a >> i) == 1)
//			count++;
//		
//		printf("%d", count);
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int n = sizeof(int);
	printf("%d", n);
	return 0;
}