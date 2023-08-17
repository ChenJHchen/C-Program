#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0; //  -1
//	//-1
//	//在计算机中，整数在内存中存放的是补码
//	//有 原码 反码 补码
//	//其中整数的三码相同
//	// 例如 0 :  10000000000000000000000000000001  原码
//	//           11111111111111111111111111111110  反码
//	//           11111111111111111111111111111111  补码    
//	//输出的是原码 在内存内存中存放的是补码
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int b = ++a;
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	//前置++  先运算 在使用
//
//	//int a = 10;
//	//int b = a++;
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	//后置 ++  先使用 后运算 
//
//	
//
//	return 0;
//}

//int main()
//{
//
//	int a = (int)3.14;//强制类型转换
//	printf("%d\n", a);
//	return 0;




//关系操作符
//int main()
//{
//	/*int a = 3;
//	int b = 5;*/
//	// && 同时为真 都为真
//	// || 有1个为真  就为真
//
//	//条件操作符
//	// exp1? exp2 : exp3
//	//表达式1成立 则表达式二 否则表达式 三
//	//int a = 0;
//	//int b = 3;
//	//int max = 0;
//	//max = (a > b ? a : b);
//	//printf("%d\n", max);
//
//
//	//逗号表达式 是最后一个表达式的值
//
//	//int a = 0;
//	//int b = 3;
//	//int c = 5;
//	//int d = (a = b + 2, c = a - 4, b = c + 2);
//	//printf("%d\n", d);
//
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n",arr[5]//[] 小标引用操作符
//
//
//	//printf("hehe\n");// ()  函数调用操作符
//
//	//关键字  是c语言提供的 不能自己创建 不能做变量名
//
//
//	// auto  每个局部变量都是auto修饰的
//	//{
//	//	int a = 10;  //自动创建，自动销毁  所以auto 一般省略
//	//}
//
//	// extern 是用来修饰外部符号的
//	// register 寄存器 关键字
//
//	//register int num = 100;// 建议num的值放在寄存器中
//	//大量频繁使用的变量 放在寄存器 效率更高
//
//	//signed 符号
//	//unsigned 无符号
//	//static 静态
//	//union 联合体
//	//volatile  段位
//	// define include 不是关键字  它们是预处理指令
//	
//
//
//
//	// typedef 类型重定义
//
//	unsigned int num = 100;
//
//
//	return 0;
//}


//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//
//	// 1 static 修饰局部变量
//	// static 修饰全局变量
//	// static 修饰函数
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}




//void test()
//{
//	 static int a = 1;//static修饰的局部变量 在出它的局部范围不销毁
//	 //改变局部变量的生命周期,本质上是改变的存储类型
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//
//	// 1 static 修饰局部变量
//	// static 修饰全局变量
//	// static 修饰函数
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern int g_val;
////全局变量在整个工程都可以使用
////static 修饰全局变量,使得全局变量只能在自己源文件使用,其他源文件不能使用
////全局变量 在其他源文件可以使用，是因为全局变量具有链接属性
////被static修饰后就变成了内部链接属性，其他源文件就不能链接到它了!
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}





//static修饰函数

//同理static修饰全局变量类似
//extern int ADD(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//define 定义常量和宏
//#define ADD(X,Y) (X+Y)
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}




//int main()
//{
//	int a = 10;//a在内存中要分配空间 4个字节
//	// &a 拿到的是第一个地址
//	printf("%p ", &a);//%p专门打印地址
//	int * pa = &a;//pa是用来存放地址 在c语言中pa叫指针变量
//	// * 说明 pa是指针变量
//	//int 说明pa执行的对象是int类型
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;// * 解引用 *pa就是通过pa里面的地址 找到a
//	printf("%d\n", a);
//	return 0;
//}

//指针就是地址



//指针变量的大小

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	//指针大小是相同的
//	//因为指针是用来存放地址的
//	//指针需要多大空间，取决于地址的存储需要多大空间
//
//	//其中32位4字节
//	//64位8字节
//	return 0;
//}



//结构体
struct Stu
{
	char name[20];
	int age;
	double score;
};
struct Book
{
	char name[20];
	float price;
	char id[30];

};
int main()
{
	struct Stu s = { "张三",20,85.5 };
	printf("%s %d %lf\n", s.name, s.age, s.score);
	struct Stu *ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}