#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	printf("Hello World\n");
//
//	//在c语言中只有唯一的main函数，它是程序的入口
//	return 0;
//}

//int main()
//{
//    printf("%d\n", sizeof(char));//1
//    printf("%d\n", sizeof(short));//2
//    printf("%d\n", sizeof(int));//4
//    printf("%d\n", sizeof(long));//4
//    printf("%d\n", sizeof(long long));//8
//    printf("%d\n", sizeof(float));//4
//    printf("%d\n", sizeof(double));//8
//    printf("%d\n", sizeof(long double));//8
//    return 0;
//
//
//    //c语言中常用的数据类型
//}


//关于局部变量和全局变量的使用
//int num1 = 10000;//全局变量
//int main()
//{
//	int num2 = 2022;//局部变量
//	int num1 = 2023;
//	printf("%d\n", num1);
//	//当局部变量和全局变量同名时，优先考虑局部变量
//
//	return 0;
//}

//变量的使用
//int main()
//{
//	int num1 = 0;//在定义一个变量时要初始化
//	int num2 = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//关于变量的作用域和生命周期
//1. 局部变量的作用域是变量所在的局部范围。
//2. 全局变量的作用域是整个工程。
//生命周期
//变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段
//1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//2. 全局变量的生命周期是：整个程序的生命周期。


//c语言中的常量

//1.enmu常量
//int main()
//{
//    enum Sex 
//    {
//        MALE,
//        FEMALE,
//        SECRET
//    };
//   
//   
//
//       
//        //#define的标识符常量 演示
//        #define MAX 100
//        printf("max = %d\n", MAX);
//
//        //枚举常量演示
//        enum Sex s = MALE;
//        printf("%d\n", MALE);//0
//        printf("%d\n", FEMALE);//1
//        printf("%d\n", SECRET);//2
//        printf("%d\n", s);//0
//        //enmu默认是从0开始，依次加1；
//	return 0;
//}
//


//字符串和字符

//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = { 'b', 'i', 't' };
//    char arr3[] = { 'b', 'i', 't','\0' };
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//    //字符串中后面默认有个0作为结束标志,字符需要在后面添加\0作为结束标志
//    return 0;
//}



//转义字符
//int main()
//{
//    printf("c:\code\\test.c\n");
//    return 0;
//}



//选择语句
//int main()
//{
//    int coding = 0;
//    printf("你会好好学习吗？（选择1 or 0）:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("坚持，你会有好offer\n");
//    }
//    else
//    {
//        printf("放弃，回家搬砖\n");
//    }
//    return 0;
//}

//循环语句，while循环

//int main()
//{
//    printf("好好学习\n");
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("敲代码;%d\n",line);
//    }
//    if (line > 20000)
//        printf("好offer\n");
//    return 0;
//}


//函数
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf("%d %d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("sum = %d\n", sum);
//    return 0;
//}


//数组
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整形数组，最多放10个元素
//数字下标是从0开始：1-0..........10-9

//int main()
//{ //打印数组中的全部元素
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


//typedef
//typedef unsigned int uint_32;
//int main()
//{
//    //就是把unsigned int改为uint_32 其实它们两是一个意思
//    unsigned int num1 = 0;
//    uint_32 num2 = 0;
//    return 0;
//}

//static关键字
//void test()
//{//打印10个1，在调用test函数，i始终是1
//    int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}


//void test()
//{//打印1到10
//    //因为当用static修饰一个局部变量时，就表示它是一个静态局部变量
//  /* 在使用test函数中i是上一次的值，所以打印1到10*/
//    static int i = 0;//使用statci这句代码不执行
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}


//static修饰全局变量
//当一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用，不能在其他源文件内使
//用或者一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用



// define定义标识符常量
//#define MAX 1000
////define定义宏
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//    int sum = ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    return 0;
//}


//int main()
//{
//    int num = 10;
//    int* p = &num;
//    *p = 20;
//    printf("%d\n", *p);
//    return 0;
//}

//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'q';
//    printf("%c\n", ch);
//    return 0;
//}

// 指针变量的大小取决于地址的大小
//32位平台下地址是32个bit位（即4个字节）
//64位平台下地址是64个bit位（即8个字节）
//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}


//结构体

//struct Stu
//{
//    char name[20];//名字
//    int age;      //年龄
//    char sex[5];  //性别
//    char id[15]; //学号
//};
//int main()
//{
//    //打印结构体信息
//    struct Stu s = { "张三",20,"男", "20180101" };
//    //.为结构成员访问操作符
//    printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//    //->操作符
//    struct Stu* ps = &s;
//    printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
//    return 0;
//}