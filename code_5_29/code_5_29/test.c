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




int main()
{
    int a[4] = { 1, 2, 3, 4 };
    int* ptr1 = (int*)(&a + 1);
    int* ptr2 = (int*)((int)a + 1);
    printf("%x,%x", ptr1[-1], *ptr2);
    return 0;
}