#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int rigft = sz - 1;
//	while (left<rigft)
//	{
//		while ((left<rigft) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while (((left < rigft)) && (arr[rigft] % 2 == 0))
//		{
//			rigft--;
//		}
//		if (left < rigft)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[rigft];
//			arr[rigft] = tmp;
//			left++;
//			rigft--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	move_odd_even(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);;
//	}
//
//	return 0;
//}






    //int main()
    //{
    //    int age = 0;
    //    scanf("%d", &age);
    //    if (age < 18)
    //    {
    //        printf("����\n");
    //    }
    //    else if (age >= 18 && age < 30)
    //    {
    //        printf("����\n");
    //    }
    //    else if (age >= 30 && age < 50)
    //    {

    //            printf("����\n");
    //    }
    //    else if (age >= 50 && age < 80)
    //    {
    //        printf("����\n");
    //    }
    //    else
    //    {
    //        printf("������\n");
    //    }

    //    return 0;
    //}
	

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//        else
//        {
//            printf("haha\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//            printf("����һ\n");
//            break;
//        case 2:
//            printf("���ڶ�\n");
//            break;
//        case 3:
//            printf("������\n");
//            break;
//        case 4:
//            printf("������\n");
//            break;
//        case 5:
//            printf("������\n");
//            break;
//        case 6:
//            printf("������\n");
//            break;
//        case 7:
//            printf("������\n");
//            break;
//    }
//    return 0;
//}

//int main()
//{
//    int day = 0;
//     scanf("%d", &day);
//
//    switch (day)
//    {
//    case 1:
//         
//                case 2:
//                case 3:
//                case 4:
//                case 5:
//                    printf("weekday\n");
//                    break;
//                case 6:
//                case 7:
//                    printf("weekend\n");
//                    break;
//    }
//    return 0;
//}



//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d\n", i);
//        i++;
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        printf("%d\n", i);
//    }
//}


//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        if (i == 5)
//            // break;
//            continue;
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}


//int main()
//{
//    int i = 1;
//    while (i<=10)
//    {
//        i = i + 1;
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//       
//          
//    }
//
//    return 0;
//}
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�



//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//        putchar(ch);
//
//    return 0;
//}


//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '\0' || ch > '\9')//ֻ��ӡ�����ַ�
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}

//
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;




//int main()
//{
//    for (;;)
//        printf("hehe\n");
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int j = 0;
//
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            printf("hehe");
//        }
//    }
//
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int j = 0;
//
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}
//


//
//int main()
//{
//    int x = 0;
//    int y = 0;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    printf("%d", k);
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a == 0)
//        printf("hehe");
//
//    return 0;
//}


//int main()
//{
//    int i = 10;
//    do
//    {
//        printf("%d\n", i);
//    } while (i < 10);
//    return 0;
//}

//int main()
//{
//    int i = 10;
//
//    do
//    {
//        if (5 == i)
//            break;
//        printf("%d\n", i);
//    } while (i < 10);
//
//    return 0;
//}

//int main()
//{
//    int i = 10;
//
//    do
//    {
//        if (5 == i)
//            continue;
//        printf("%d\n", i);
//    } while (i < 10);
//
//    return 0;
//}



//#include<windows.h>
//int main()
//{
//    char arr1[] = "hello       world";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//
//
//  
//       
//
// 
//    
//    return 0;
//}


//#include<windows.h>
//int main()
//{
//    char arr1[] = "hello       world";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    //whileѭ��ʵ��
//    
//    for (left = 0, right = strlen(arr1) - 1;
//        left <= right;
//        left++, right--)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//    }
//    return 0;
//}



//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//    scanf("%s", input);
//  
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


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//        scanf("%s", input);
//        if (0 == strcmp(input, "������"))
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}