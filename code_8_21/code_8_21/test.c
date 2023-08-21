#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}\


//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,",sum(a));
//	}
//	return 0;
//}


//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("*************\n");
//	printf("*************\n");
//	printf("*************\n");
//
//
//	return 0;
//}


//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}




//int main()
//{
//	int age = 70;
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("寿星\n");
//		
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//		// switch后面 只能是常量整型表达式
//	{
//	case 1:
//      //case只能是常量整型表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//
//	case 3:
//		printf("星期三\n");
//		break;
//
//	case 4:
//		printf("星期四\n");
//		break;
//
//	case 5:
//		printf("星期五\n");
//		break;
//	
//	case 6:
//		printf("星期六\n");
//		break;
//	default:
//		printf("重新输入\n");
//		break;
//	
//
//	}
//	return 0;
//}



//int main()
//{
//	//在while循环中，break永久的终止循环
//	//在while循环中，contiune 跳过本次循环continue后面的代码
//	//直接去判断部分，看看是否进行下一次循环
//	int i = 1;
//	while (i <=10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理\n
//	int tmp = 0;
//   //清理缓冲区多余内容
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}