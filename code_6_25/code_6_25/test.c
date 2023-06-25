#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int fir = 0;
//	int sec = 0;
//	printf("输入两个数：>\n");
//	scanf("%d%d", &fir, &sec);
//	if (fir > sec)
//	{
//		printf("first>second\n");
//	}
//	else
//	{
//		printf("first<second\n");
//	}
//	printf("ALL Done\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int a1 = 0;
//	scanf("%d", &a);
//	a1 = a;
//	if (a < 0)
//	{
//		a = -a;
//	}
//	printf("|%d| = %d", a1, a);
//	return 0;
//}

//int main()
//{
//	char c = 0;
//	c = getchar();
//	if (c == '+')
//	{
//		printf("plus\n");
//	}
//	else if (c == '-')
//		printf("minus\n");
//	else if (c == '*')
//		printf("multiplication\n");
//	else if (c == '/')
//		printf("division\n");
//	else
//		printf("Error\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	char b = 0;
//	switch (a = 2)
//	{
//	case 1:printf("hello\n");
//		break;
//
//	case 2:switch (b = 'y')
//	{
//	case'Y':printf("how do you do?\n");
//		break;
//	case 'y':printf("how are you?\n");
//		break;
//	default:printf("hi\n");
//	}
//	case 3:printf(" i am fine\n");
//		break;
//	default:printf("no answer\n");
//		return 0;
//	}
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int min = 0;
//	scanf("%d%d", &a, &b);
//	min = (a < b) ? a : b;
//	printf("min = %d\n", min);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	printf("输入三个数:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("排序位：%d %d %d\n", a, b, c);
//
//
//	return 0;
//}



int main()
{
	int a = 3;
	int b = 2;
	int c = 1;
	if (a > b)
		a =b;
	if (a > c)
		a = c;
	printf(" %d %d %d\n",a,b,c);
	return 0;
}