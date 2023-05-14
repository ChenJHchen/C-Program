#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//void move_arr_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//左到右找一个偶数
//	while (left<right)
//	{
//		while ((left<right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//右到左找一个奇数
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
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
//	//调整
//	move_arr_even(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//
//	return 0;
//}




//int main()
//{
//    int arr[10] = { 0 };
//    
//    int sz = sizeof(arr) / sizeof(arr[0]);
//   
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//  
//    for (i = 0; i < 10; ++i)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    for (i = 0; i < sz; ++i)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//} 相差四个字节


//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//			
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//int main()
//{
//    int arr[10] = { 1,2,3,4,5 };
//    printf("%p\n", arr);
//    printf("%p\n", &arr[0]);
//    printf("%d\n", *arr);
//    //输出结果
//    return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("1:%p\n", arr);
//	printf("1:%p\n", arr+1);
//	printf("----------------------\n");
//	printf("2:%p\n", &arr[0]);
//	printf("2:%p\n", &arr[0]+1);
//
//	printf("----------------------\n");
//
//
//	printf("3:%p\n", &arr);
//	printf("3:%p\n", &arr+1);
//
//
//
//	return 0;
//}