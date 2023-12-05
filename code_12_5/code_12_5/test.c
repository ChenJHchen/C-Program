#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//std 标准输入输出
//int main()
//C语言代码中一定要有main函数
//主函数
//标准主函数写法
// int 整型类型
//main是函数的入口 且只能有一个

//{
//	printf("hello world\n");
////printf是一个库函数 专门打印数据
//
//	return 0;
//
//}

int main()
{
	printf("%zu\n",sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
//单位是字节
//1字节 = 8比特位
//其中C语言规定 sizeof(long)>=sizeof(int)
//1
//2
//4
//4
//8
//4
//8

	return 0;
}