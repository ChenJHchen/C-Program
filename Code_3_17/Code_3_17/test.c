 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	sizeof ��һ���������ţ����Ǻ���
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	return 0;
}