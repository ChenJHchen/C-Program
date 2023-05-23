#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("******1.add  2.sub****\n");
//	printf("******3.mul  4.div****\n");
//	printf("******   0.exit    ***\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//
//			break;
//		case 3:
//			calc(Mul);
//
//			break;
//		case 4:
//			calc(Div);
//
//			break;
//		case 0:
//			printf("err\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;		
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8,4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}



//
//void menu()
//{
//	printf("**********************\n");
//	printf("******1.add  2.sub****\n");
//	printf("******3.mul  4.div****\n");
//	printf("******   0.exit    ***\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////calc(int (*pf)(int, int))
////{
////	int x = 0;
////	int y = 0;
////	int ret = 0;
////	printf("请输入两个操作数:>");
////	scanf("%d %d", &x, &y);
////	ret = pf(x, y);
////	printf("%d\n", ret);
////}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	
//	int (*pfArr[5])(int, int) = {0,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//		
//	} while (input);
//	return 0;
//}