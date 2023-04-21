#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

////#include<windows.h>
////int main()
////{
////
////	char arr1[] = "hello  world";
////	char arr2[] = "############";
////	int left = 0;
////	int right = strlen(arr1) - 1;
////	printf("%s\n", arr2);
////	while (left<=right)
////	{
////		Sleep(1000);
////		arr2[left] = arr1[left];
////		arr2[right] = arr1[right];
////		left++;
////		right--;
////		printf("%s\n", arr2);
////
////	}
////	
////	return 0;
////}
//
//
//
////int main()
////{
////	int i = 0;
////	char password[20] = { 0 };
////	for (i = 0; i < 3; i++)
////	{
////		printf("请输入密码:>");
////		scanf("%s", password);
////		if (strcmp(password, "abcdef") == 0)
////		{
////			printf("登录成功\n");
////			break;
////		}
////		else
////		{
////			printf("密码错误\n");
////		}
////
////	}
////	if (i == 3)
////	{
////		printf("三次密码输入错误，退出程序\n");
////	}
////	return 0;
////}

//#include<stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("******    1.0 play******\n");
//
//	printf("******    0.0 exit******\n");
//
//	printf("************************\n");
//
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//
//
//
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//
//		}
//		else 
//		{
//			printf("猜对了\n");
//			break;
//
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//    scanf("%s", input);
//        if (0 == strcmp(input, "我是猪"))
//        {
//            system("shutdown -a");
//        }
//        else
//        {
//            goto again;
//        }
//    return 0;
//}



//void Swap(int* px, int* py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("交换前：a=%d b=%d\n", num1, num2);
//	Swap(&num1, &num2);
//
//	printf("交换后：a=%d b=%d\n", num1, num2);
//
//	return 0;
//}