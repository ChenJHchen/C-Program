#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////#define Mon 1
//enum Day
//{
//	Mon = 1,
//	Tues,
//	Wed=5,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day d = Fri;
//	printf("%d\n", d);
//	return 0;
//}

#include<errno.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d " ,* (p + i) = i);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d " ,* (p + i));
//		}
//		free(p);
//		p = NULL;
//		return 0;
//	
//	
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	 int i = 0;
//			for (i = 0; i < 10; i++)
//			{
//				* (p + i) = i+1;
//			}
//		int* ptr =	(int*)realloc(p, 80);
//		if (ptr != NULL)
//		{
//			p = ptr;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d " ,* (p + i));
//
//		}
//		free(p);
//		p = NULL;
//	return 0;
//}


//int main()
//{
//	relloc(NULL,40);//malloc;
//	return 0;
//}