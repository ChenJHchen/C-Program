#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//
//	//32λ��4byte��64λ;8byte
//	int a[] = { 1,2,3,4 };
//	printf("1:%d\n", sizeof(a));
//	//16��a���������飬������������Ĵ�С��byte)
//	printf("2:%d\n", sizeof(a + 0));
//	//4��a��ʾ��Ԫ�ص�ַ
//	printf("3:%d\n", sizeof(*a));
//	//4��a��Ȼ����Ԫ�صĵ�ַ��*a�е�a����Ԫ�ص�ַ����������Ȼ����Ԫ�صĵ�ַ
//	printf("4:%d\n", sizeof(a + 1));
//	//4:��Ԫ�ص�ַ+1����һ�����ͣ������ڶ���Ԫ�صĵ�ַ
//	printf("5:%d\n", sizeof(a[1]));
//	//4:������ǵڶ���Ԫ�صĴ�С
//	printf("6:%d\n", sizeof(&a));
//	//4��&a������ĵ�ַ��Ҳ�Ǹ���ַ
//	printf("7:%d\n", sizeof(*&a));
//	//16��*&a����������Ĵ�С
//	//&a�õ���������ĵ�ַ��������int (*)[4],��һ������ָ��
//	//������ָ��������ҵ��ľ������飬ʵ����&a --> a
//	printf("8:%d\n", sizeof(&a + 1));
//	//4��&a�õ���������ĵ�ַ�������ַ��1������������
//	//&a�õ���������ĵ�ַ
//	//&a --> int (*)[4]
//	//&a��1���Ǵ�����a�ĵ�ַ���������(4������Ԫ��)�����С�����ǵ�ַ 
//	printf("9:%d\n", sizeof(&a[0]));
//	//4����һ��Ԫ�ص�ַ�Ĵ�С
//	printf("10:%d\n", sizeof(&a[0] + 1));
//	//4���ڶ���Ԫ�صĵ�ַ�Ĵ�С
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