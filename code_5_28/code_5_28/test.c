#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//
//	//32位：4byte，64位;8byte
//	int a[] = { 1,2,3,4 };
//	printf("1:%d\n", sizeof(a));
//	//16：a是整个数组，计算整个数组的大小（byte)
//	printf("2:%d\n", sizeof(a + 0));
//	//4：a表示首元素地址
//	printf("3:%d\n", sizeof(*a));
//	//4：a仍然是首元素的地址，*a中的a是首元素地址，解引用仍然是首元素的地址
//	printf("4:%d\n", sizeof(a + 1));
//	//4:首元素地址+1跳过一个整型，来到第二个元素的地址
//	printf("5:%d\n", sizeof(a[1]));
//	//4:计算的是第二个元素的大小
//	printf("6:%d\n", sizeof(&a));
//	//4：&a是数组的地址，也是个地址
//	printf("7:%d\n", sizeof(*&a));
//	//16：*&a是整个数组的大小
//	//&a拿到的是数组的地址，类型是int (*)[4],是一个数组指针
//	//对数组指针解引用找到的就是数组，实际上&a --> a
//	printf("8:%d\n", sizeof(&a + 1));
//	//4：&a拿到的是数组的地址，数组地址加1跳过整个数组
//	//&a拿到的是数组的地址
//	//&a --> int (*)[4]
//	//&a加1，是从数组a的地址向后跳过了(4个整型元素)数组大小，还是地址 
//	printf("9:%d\n", sizeof(&a[0]));
//	//4：第一个元素地址的大小
//	printf("10:%d\n", sizeof(&a[0] + 1));
//	//4：第二个元素的地址的大小
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("1:%d\n", sizeof(arr));
//	//6
//	printf("2:%d\n", sizeof(arr + 0));
//	printf("3:%d\n", sizeof(*arr));
//	printf("4:%d\n", sizeof(arr[1]));
//	printf("5:%d\n", sizeof(&arr));
//	printf("6:%d\n", sizeof(&arr + 1));
//	printf("7:%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}
#include<string.h>
int main()
{





	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));






	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));




	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));

	return 0;
}