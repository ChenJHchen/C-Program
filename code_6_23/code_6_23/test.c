#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 0;
//	printf("a = %d,b = %d\n", a, b=4);
//	return 0;
//}


//int main()
//{
//	float x = 12.345;
//	double y = 2.346;
//	printf("x1 = %f,x2 = %6.2f,x3 = %-6.2f,x4 = %.2f\n", x, x, x, x);
//	printf("x5 = %e,x6 = %10.2e,x7 = %-10.2e,x8 = %.2e\n", x, x, x, x);
//	printf("y1 = %f,y2 = %6.2f,y3 = %-6.2f,y4 = %.2f\n", y, y, y, y);
//	printf("y5 = %e,y6 = %10.2e,y7 = %-10.2e,y8 = %.2e\n", y, y, y, y);
//
//
//	return 0;
//}



//int main()
//{
//	char ch = 'a';
//	int i = 97;
//	printf("%c,%d\n", ch, ch);
//	printf("%c,%d\n", i, i);
//
//	return 0;



//int main()
//{
//	printf("s1 = %05.2s,s2  =%-05.2s,s3 = %.2s,s4 = %3s,s5 = %s\n", "abcd", "abcd", "abcd", "abcd", "abcd");
//	return 0;
//}



//int main()
//{
//	char c1 = 'A';
//	char c2 = 66;
//	int c3 = '\103';
//	int c4 = 0;
//	c4 = c3 + 1;
//	putchar(c1); putchar(c2);
//	putchar('\n');
//	putchar(c3); putchar(c4);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入 a =,b =,c = \n");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("a = %d,b = %d,c = %d", a, b, c);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%c%c%c", &a, &b, &c, &d);
//	printf("a = %d,b = %c,c = %c,d = %c\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	char c1 = 0;
//	int c2 = 0;
//	printf("\n输入三个字符:\n");
//	c1 = getchar();
//	putchar(c1);
//	c2 = getchar();
//	putchar(c2);
//	putchar(getchar());
//	putchar('\n');
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	char b = 0;
//	printf("输入:a b\n");
//	scanf("%d", &a);
//	getchar();
//	scanf("%c", &b);
//	printf("a = %d,b = %c\n", a, b);
//	return 0;
//}
//int main()
//{
//	printf("Step 1:\n");
//	printf("Step 2:\n");
//
//	printf("Step 3:\n");
//	printf("Step 4:\n");
//	printf("Step 5:\n");
//	printf("Step 6:\n");
//	printf("输入ENTER继续");
//	getchar();
//	printf("Step 7:\n");
//	printf("Step 8:\n");
//	printf("Step 9:\n");
//	printf("Step 10:\n");
//	printf("Step 11:\n");
//
//
//
//	return 0;
//
//}


//#include<math.h>
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	double area = 0;
//	printf("输入 a，b\n");
//	scanf("%lf%lf", &a, &b);
//	printf("a = %f,b = %f\n", a, b);
//	c = sqrt(a * a + b * b);
//	area = 1. / 2 * a * b;
//	printf("c = %-7.2f", c);
//	printf("area = %-7.2f\n", area);
//	return 0;
//}

int main()
{
	char c = 0;
	int i = 0;
	int j = 0;
	float x = 0;
	float y = 0;
	printf("输入 c，i，j，x，y\n");
	scanf("%c，%d，%d，%f，%f", &c, &i, &j, &x, &y);
	printf("ch = \'%c\',ASCII = %d\n",c,c);
	printf("i = %-3dj=%d\n",i,j);
	printf("x = %-8.2fy = %.2f\n", x, y);

	return 0;
}