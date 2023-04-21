#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d%d\n", a, b);
//	int c =swap(a, b);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//是1表示是素数
//		int j = 0;
//		for (j = 2; j<=sqrt(i); j++) //j<=i-1
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;  
//			}
//
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//
//		}
//		
//	}
//	printf("\ncount is %d\n", count);
//
//	return 0;
//}


//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//			
//		}
//		
//	}
//	printf("\ncount is %d\n", count);
//	
//
//	return 0;
//}



//int main()
//{
//	
//
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			
//				
//			}
//		}
//		if (year % 400 == 0)
//		{
//			
//			printf("%d ", year);
//		
//
//		}
//		
//	
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//
//
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//binary_serch(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return - 1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找不到返回-1
//	//找到返回下标
//	int ret = binary_serch(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是:%d\n",ret);
//
//	}
//	return 0;
//}



//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}





// main其实有三个参数