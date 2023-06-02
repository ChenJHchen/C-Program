#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c' };
//	int ret1 = strlen(arr1);
//	int ret2 = strlen(arr2);
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);//Ëæ»úÖµ
//
//	return 0;
//
//}

//int main()
//
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdef";
//	
//	/*if (strlen(arr1) - strlen(arr2) > 0)*/
//	if (strlen(arr1) > strlen(arr2))
//
//
//	{
//		printf(">\n");
//
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t ret = my_strlen(arr);
//	printf("%u\n", ret);
//	return 0;
//}


//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name,"zhangsan");
//	printf("%s\n", name);
//	return 0;
//} 

//
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*src)
//	/*	while (*dest++ = *src++)
//		{
//			;
//	}*/
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//0
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}





//int main()
//
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "word";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}





char* my_strcat(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return dest;

}
int main()

{
	char arr1[20] = "hello ";
	char arr2[] = "word";
	my_strcat(arr1, arr2);
	/*my_strcat(arr1, arr1);*/ //err
	printf("%s\n", arr1);
	return 0;
}