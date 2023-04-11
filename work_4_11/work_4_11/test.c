#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}

//int main()
//{
//	printf("%15d\n", 0XABCDEF);
//	return 0;
//}


//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d", ret);
//	
//	return 0;
//}


//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}
//int main()
//{
//	int ID = 0;
//	float C_program = 0;
//	float Math = 0;
//	float English = 0;
//	scanf("%d;%f,%f,%f", &ID,&C_program, &Math, &English);
//	printf("The each subject score of No. %d;%.2f,%.2f,%.2f", ID,C_program, Math, English);
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		printf("YES\n");
//		else
//		printf("NO\n");
//		getchar();//处理斜杠\n
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isalpha(ch))
//            printf("YES\n");
//        else
//            printf("NO\n");
//        getchar();
//    }
//    return 0;
//}


//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	int i = 0;
//	for (i = 0; i < 5; i++)//行数
//	{
//		
//		int j = 0;
//		for (j = 0; j < 5 - i-1; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i ++ )
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%4d\n", year);
//	printf("month=%2d\n", month);
//	printf("day=%2d\n", day);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	while (scanf("%d",&i) != EOF)
//	{
//		printf("%d\n", 1 << i);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int temp = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d\n", ch);
//
//	return 0;
//}


//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", ((-8 + 22) * a - 10 + c / 2));
//	
//	return 0;
//}

//int main()
//{
//    int a = 40;
//    int c = 212;
//    int ret = (-8 + 22) * a - 10 + c / 2;
//    printf("%d\n", ret);
//    return 0;
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("%d %d\n", num1 / num2, num1 % num2);
//	return 0;
//}