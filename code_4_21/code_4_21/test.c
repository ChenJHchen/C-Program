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
////		printf("����������:>");
////		scanf("%s", password);
////		if (strcmp(password, "abcdef") == 0)
////		{
////			printf("��¼�ɹ�\n");
////			break;
////		}
////		else
////		{
////			printf("�������\n");
////		}
////
////	}
////	if (i == 3)
////	{
////		printf("����������������˳�����\n");
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
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//
//		}
//		else 
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
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
//    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//    scanf("%s", input);
//        if (0 == strcmp(input, "������"))
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
//	printf("����ǰ��a=%d b=%d\n", num1, num2);
//	Swap(&num1, &num2);
//
//	printf("������a=%d b=%d\n", num1, num2);
//
//	return 0;
//}