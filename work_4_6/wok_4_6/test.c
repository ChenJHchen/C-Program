﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("v   v\n v v \n  v  \n");
//	
//	return 0;
//}


//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n",sizeof(int));
//	printf("The size of long is %d bytes.\n",sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}


//int main()
//{
//	printf("%#o %#X", 1234, 1234);
//	return 0;
//}
//



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}
int main()
{
	int ch = 0;
	while((ch = getchar()) != EOF)
	{
		printf("%c\n", (ch + 32));
		getchar('\n');
	}

	
	return 0;
}
