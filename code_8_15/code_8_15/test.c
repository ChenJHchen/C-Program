#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//C语言是从主函数的第一行开始的
//所以C语言中有main函数,程序的入口
//引用头文件#include<stdio.h>
//并且有且仅有一个main函数,一个工程可以有多个.c文件
//多个.c文件只用一个main函数
//int main()
//{
//	printf("hehehe\n");//库函数
//	return 0;
//}


//数据类型
//浮点数 ,小数
//整型,整数

//字符 a,  ‘ a ’

//int main()
//{
//	//printf("%d\n", 100); // %d 打印一个整数
//	//printf("%d\n", sizeof(char));
//	////sizeof - 关键字-- 操作符号--计算类型或者变量所占空间的大小
//	//printf("%d\n", sizeof(short));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(long));
//	//printf("%d\n", sizeof(long long));
//	//printf("%d\n", sizeof(float));
//	//printf("%d\n", sizeof(double));
//	//单位是字节,其中一个字节等于8个比特位
//	//C语言标准 ;sizeof(long)>=sizeof(int)
//
//
//	//变量和常量,顾名思义
//	
//	//int age = 20;//定义一个变量
//
//	
//	return 0;
//}


//全局变量和局部变量
//int main()
//{
//	//大括号外部定义的变量就是全局变量,
//	//大括号内部定义变量就是局部变量
//	//当局部变量和全局变量重名时，局部优先
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);//输入函数
//	sum = a + b;
//	printf("%d\n", sum);
//	//sancf_s -- VS编译提供的，不是C语言标准规定的
//
//	return 0;
//}


//作用域和生命周期
//作用域:在哪里使用，哪里就是它的作用域
//局部变量的作用域，就是局部变量所在的局部范围
//全局变量作用域:整个工程
//extern int g_val;//声明变量
//
////变量的生命周期:
////局部变量的生命周期:进入局部范围生命周期开始，出局部范围，生命周期结束
//// 
////全局变量的生命周期:程序的生命周期
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//常量:不能改变的量
//1.字面常量 ex:3.14,10 'a'."abcdef";
//const 修饰的常变量:
//被const修饰后，就具有常属性，但本质上还是变量

//#define定义的标识符常量

//#define Max 10000;
//
//
////枚举常量，一一列举的常量
//int main()
//{
//	//int arr[10] = { 0 };
//	//const int n = 10;
//	//int arr2[n] = { 0 };//n是变量
//	////所以用const修饰的变量，本质上还是变量，它只是别const修饰不能改变
//	int n = Max;
//	printf("%d\n", n);
//	return 0;






//枚举常量，一一列举的常量
//enum Sex
//{
//	MALE = 4,//赋初值,并不改变它的值
//	FEMALE,
//	SECRET,
//
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	//枚举常量默认是从0开始
//	return 0;
//}


//字符串
// “abcdef”,结束字符是 ‘\0’
//#include<string.h>
//int main()
//{
//	char arr[] = "hello";//hello\0,字符串在末尾隐藏一个\0,它是字符串的结束标志
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//乱码,所以\0是结束标志
//
//
//	//strlen求字符串的长度
//	int len = strlen("abc");
//	printf("%d\n", len);//计算长度时，\0不加入计算
//	return 0;
//}




//转义字符,顾名思义，转变原来的意思
// \ddd 其中 ddd 表示1  -3 八进制的数字

// \dd ,dd表示16进制
//int main()
//{
//	//printf("c:\\test\\test.c\n");
//	//printf("c:\test\test.c");// \t s是一个转义字符,再加\t就抵消转义
//
//
//	printf("%c\n", '\130');//ASCII//打印的十进制
//	printf("%c\n",'\x30');
//	return 0;
//}


//选择语句
//循环语句

//函数
//int ADD(int x, int y)//函数传参
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	int sum = ADD(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//




//数组 一组相同类型元素的的集合
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组的创建和初始化
//	//其中数组下标是从0开始 0 -1  1-2
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//			i++;
//	}
//	return 0;
//}




//操作符号


// '/'只要其中有一个是小数，继续的就是小数除法

int main()
{
	//int a = 2;
	//int b = a << 1; //左移操作符,移动的是一个二进制位,右端补0


	////sizeof计算类型或者变量的大小
	//int a = 10;
	//pritnf("%d\n", sizeof(int));
	//pritnf("%d\n", sizeof(a)); // 括号可省略，所以sizeof 是一个操作符号

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算的是数组总大小
	printf("%d\n", sizeof(arr[0]));//计算的是一个元素的大小
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	printf("%d\n", sz);
	

	return 0;
}