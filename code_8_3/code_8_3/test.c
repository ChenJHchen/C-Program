#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	printf("bite\n");
//	printf("hehe\n");
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
//	//sizeof(long) >= sizoef(int)
//	return 0;
//}


//int main()
//{
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//int a = 20;//全局变量
//int main()
//{
//	int a = 10;//局部变量
//	//当局部变量和全局变量冲突时，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//extern int g_val;
//int main()
//{	
//	printf("%d\n", g_val);
//	return 0;
//}


//int main()
//{
//	//局部变量的生命周期:进入局部范围生命周期开始
//	//出局部范围结束
//	//全局变量的生命周期;程序的生命周期
//	{ 
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	//comst修饰的常变量
//	//const int num = 10;//本质上还是一个变量，虽然给它赋予了常属性
//	////num = 20;
//	//printf("%d\n", num);
//	int arr[10] = { 0 };
//	//int arr2[n] = { 0 }; c
//	return 0;
//}





//int main()
//{
//#define MAX 1000
//
//	int n = MAX;
//	printf("%d\n", n);
//	return 0;
//}
//enum Sex
//{
//	MALE, 
//	FEMAL,
//	SECRET,
//
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMAL);
//	printf("%d\n", SECRET);
//
//
//	return 0;
//}

#include<string.h>
int main()
{
	char arr1[] = "hello";//\0是结束标志
	char arr2[] = { 'a', 'b', 'c' };
	int len = strlen("abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));


	return 0;
}