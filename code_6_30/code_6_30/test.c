#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void left_move(char arr[],int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr,k);
//	printf("%s\n", arr);
//
//	return 0;
//}
#include<assert.h>
//reverse(char *left,char* right)
//{
//	assert(left && right);
//	while(left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[],int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//		int k = 0;
//		scanf("%d", &k);
//		left_move(arr,k);
//		printf("%s\n", arr);
//	return 0;
//}
//
//int find_num(int arr[3][3],int *px,int *py,int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x<=*px-1 && y>=0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//		printf("%d %d\n", x, y);
//	else
//		printf("找不到\n");
//	return 0;
//}
//int is_left_move(char arr1[],char arr2[])
//{
//	//int len = strlen(arr1);
//	//int i = 0;
//	//for (i = 0; i < len; i++)
//	//{
//	//	char tmp = arr1[0];
//	//	int j = 0;
//	//	for (j = 0; j < len - 1; j++)
//	//	{
//	//		arr1[j] = arr1[j + 1];
//	//	}
//	//	arr1[len - 1] = tmp;
//	//	if (strcmp(arr2, arr1) == 0)
//	//		return 1;
//	//}
//	/*return 0;*/
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(arr1,arr1,len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//int main() bug
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;//是上三角
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;//不是上三角
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 0)
//		printf("No\n");
//	else
//		printf("Yes\n");
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int flag1 = 0;//升序
//	int flag2 = 0;//降序
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else
//			{
//				flag2 = 1;
//			}
//		}
//	}
//	if (flag1 + flag2 == 1)
//	{
//		printf("sort\n");
//	}
//	else
//	{
//		printf("sort\n");
//	}
//	
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};

//struct Stu
//{
//	char name[20];
//	int age;
//}s1,s2;
//int main()
//{
//
//	return 0;
//}


//struct Node
//{
//	int data;
//	struct Node next;
//};
//int main()
//{
//	
//	return 0;
//}

struct Node
{
	int data;
	struct Node* next;
};
int main()
{

	return 0;
}