#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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

//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest);
//	assert(src);
//	char*  ret = dest;
//	while (*dest++ = *src++)
//	{
//	
//		;
//	}
//	*dest = *src;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//		
//	return 0;
//}

//#include<assert.h>
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest);
//		assert(src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, "world");
//	printf("%s\n", arr1);
//	return 0;
//}