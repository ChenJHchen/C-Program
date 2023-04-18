#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//		printf("成年\n");
//
//	else
//		printf("未成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//
//	}
//	else if (age >= 18 && age <= 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age <= 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age <= 80)
//	{
//		printf("老年\n");
//
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//	
//	
//
//	return 0;
//}

//在c语言中 1表示真0表示假


//悬空else
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a == 1)
//	{
//		if (b == 2)
//		{ 
//			printf("hehe\n");
//
//		}
//		
//		else
//		{
//			printf("haha\n");
//
//		}
//		printf("hhh\n");
//			
//	}
//	
//	return 0;
//}

//else是和它离的最近的if匹配的


//判断一个数是否为奇数
//int main()
//
//{
//
//    int a = 0;
//
//    printf("请输入一个整数:>");
//
//    scanf("%d", &a);
//
//    if (a % 2 == 1)
//
//        printf("%d为奇数！", a);
//
//    else
//
//        printf("%d为偶数！",a);
//
//    return 0;
//
//}
//
////输出1—100的所有奇数

//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        printf("%d ", i);
//        i += 2;
//    }
//    return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	i++;
//
//	}
//	return 0;
//}


//int main()
//{
//int day = 0;
//scanf("%d", &day);
//switch (day)
//{
//
//    case 1:
//        printf("星期一\n");
//        break;
//    case 2:
//        printf("星期二\n");
//        break;
//    case 3:
//        printf("星期三\n");
//        break;
//    case 4:
//        printf("星期四\n");
//        break;
//    case 5:
//        printf("星期五\n");
//        break;
//    case 6:
//        printf("星期六\n");
//        break;
//    case 7:
//        printf("星期天\n");
//        break;
//}
//return 0;
//}


//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//
//    case 1:
//    
//       
//       
//    case 2:
//       
//        
//    case 3:
//       
//        
//    case 4:
//       
//        
//    case 5:
//        printf("weekday\n");
//        break;
//    case 6:
//       
//       
//    case 7:
//        printf("weekend\n");
//        break;
//    default:
//        printf("输入错误\n");
//        break;
//   
//    }
//    return 0;
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);// 5 3
//    return 0;
//}



//while循环 中的break和continue
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		
//			printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;// 1 2 3 4
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i = i + 1; // 1 2 3 4 死循环 当条件为真是continue不执行后面的语句
//	}
//
//	return 0;
//}


//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        i = i + 1;
//      
//            if (i == 5)
//                continue;
//        printf("%d ", i);
//    }
//    return 0; / 2 3 4 5 7 8 9 10
//}




//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//        putchar(ch);
//    return 0;
//}

//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}



//for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//for 和while的比较
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("hehe is %d\n",i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i=1; i <= 10; i++)
//	{
//		printf("hehe is %d\n",i);
//
//	}
//	return 0;
//}

// break和continue在for循环中

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
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
//建议for语句的循环控制变量的取值采用“前闭后开区间”写法。


//int main()
//{
//	//代码1
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//		return 0;
//	}

//int main()
//{
//    int i = 0;
//    int j = 0;
//
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            printf("hehe%d\n",j);
//        }
//    }
//    return 0;
//}

//
//int main()
//{
//    int i = 0;
//    int j = 0;
//  
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("heheis %d\n",j);
//        }
//    }
//
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
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



// do while 循环

//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
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
//



//int main()
//{
//	
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n",arr1[i]);
//		i++;
//	}
//
//	return 0;
//}

