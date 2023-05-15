#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	 const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1 == arr2\n");
//	else
//		printf("arr1 != arr2\n");
//
//
//
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d " ,* (parr[i] + j));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//void print(int *arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//void print_arr1(int *arr[][5], int row, int col)
//{
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//     
//            printf("\n");
//    }
//}
//
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
// 
//   
//    print_arr1(arr, 3, 5);
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = a ^ b;
//	printf("%d\n ",c);
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("1 %d\n", sizeof(arr));//(1)
//	printf("2 %d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int a = (num1& num2);
//	int b = (num1 | num2);
//	int c = (num1^ num2);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}




struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;

};
void set_age1(struct Stu stu)
	{
		stu.age = 18;
	}
	void set_age2(struct Stu* pStu)
	{
		pStu->age = 18;
	}
	int main()
	{
		struct Stu stu;
		struct Stu* pStu = &stu;

		stu.age = 20;
		set_age1(stu);

		pStu->age = 20;
		set_age2(pStu);
		return 0;
	}