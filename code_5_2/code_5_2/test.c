#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = fib(n);
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = {0};
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//	
//			
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	
//
//	scanf("%d", &n);
//	
//	int arr[50] = { 0 };
//	int i = 0;
//	
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i]<min)
//			min = arr[i];
//	}
//	printf("%d\n",max-min);
//
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while (scanf("%c",&ch) != EOF)
//	{
//		if((ch>='A' && ch<= 'Z')||(ch>='a' && ch<='z'))
//			
//	}  在百分号c面前加空格，跳过下一个字符之前的所有空白字符
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j =1; j <= 4; j++)
//		{
//			int k =(int)pow(10, j);
//			sum += (i % k) * (i / k);
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}