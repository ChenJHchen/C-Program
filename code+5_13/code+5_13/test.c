#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int get_max(int x, int y)
//{
//	return(x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max is %d\n", max);
//	return 0;
//}

//int Swap(int* px,int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap(&num1, &num2);
//	printf("Swap: num1 = %d num2 = %d", num1, num2);
//	return 0;
//}
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}



//#include <string.h>
//int main()
//{
//    char arr[20] = "hello";
//    int ret = strlen(strcat(arr, "bit"));
//    printf("%d\n", ret);
//    return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str1[50] = "Hello, ";
//    char str2[] = "world!";
//    strcat(str1, str2);
//    printf("%s\n", str1);  
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//  
//    return 0;
//}


#include <stdio.h>
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
//	int num = 1234;
//	print(num);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度。


//int Strlen(const char* str)
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

//int factorial(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a * factorial(a - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}

//  求第n个斐波那契数
//int fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fib(a);
//	printf("%d\n", ret);
//	return 0;
//}








//int fib(int n)
//{
//    int result = 1;
//    while (n > 1)
//    {
//        result *= n;
//        n -= 1;
//    }
//    return result;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fib(a);
//	printf("%d\n", ret);
//	return 0;
//}




int fib(int n)
{
    int result ;
    int pre_result ;
    int next_older_result;
    result = pre_result = 1;
 
        while (n > 2)
        {
            n -= 1;
            next_older_result = pre_result;
            pre_result = result;
            result = pre_result + next_older_result;
        }
    return result;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = fib(a);
	printf("%d\n", ret);
	return 0;
}