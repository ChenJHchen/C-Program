#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//c语言是从main函数开始的，程序的入口
//并且仅有一个main函数
//1.一个工程中可以有多个.c文件
//2. 但多个
//int main()
//{
//	printf("This is  My first C program\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}
//int b = 20;//全局变量
////
//int main()
//{
//	int a = 10;//局部变量
//	return 0;
//}
//int a = 100;
//int main()
//
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	//当局部变量和全局变量同名时，局部变量优先
//  //但建议不要将全局和局部同名
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
// 声明来自外部的符号
// extern

//int a = 100;
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}