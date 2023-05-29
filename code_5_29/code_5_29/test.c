#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//    {
//        int a[5] = { 1, 2, 3, 4, 5 };
//        int* ptr = (int*)(&a + 1);
//        printf("%d,%d", *(a + 1), *(ptr - 1));
//        return 0;
//    }



//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}




//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[] = { 'a','b','c','\0'};
//	int ret = strlen(arr);
//	int ret1 = strlen(arr1);
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}


//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = 0;
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}


//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name,"zhangshan");
//	printf("%s\n", name);
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char p[] = "abcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);
//	printf("%s\n",p);
//	return 0;
//}



//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, "world");
//	printf("%s\n", arr1);
//	return 0;
//}