#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<assert.h>
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char arr1[20] = "a";
//	char arr2[20] = "c";
//	//arr1是数组名，arr2也是数组名，它们的地址不一样
//	//if (arr1 == arr2)
//	//{
//	//	printf("==\n");
//	//}
//	//else
//	//{
//	//	printf("!=\n");
//	//}
//	//两个字符串类容比较，strcmp
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == '\0')
//		printf("==\n");
//	else
//		printf(">\n");
//		return 0;
//}



//int main()
//{
//	char arr1[20] = "abcedf";
//	char arr2[] = "hello";
//	strncpy(arr1, arr2,5);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = strncmp(arr1, arr2, 4);
//
//	printf("%d\n", ret);
//	/*if (ret == 0)
//		printf("==\n");
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf(">\n");*/
//	return 0;
//}


//char* my_strstr(char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0'&& *s2 != '\0' && * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//
//}
//int main()
//{
//	char email[] = "abc";
//	char str[] = "qq";
//	char * ret = my_strstr(email, str);
//	if (ret == NULL)
//	{
//		printf("no exit\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}




//int main()
//{
//	const char* sep = "@.";
//	char email[] = "chen@qq.com.net";
//	char cp[60] = { 0 };
//	strcpy(cp, email);
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); 
//		ret != NULL;
//		ret = strtok(NULL,sep))
//	{
//		printf("%s\n", ret);
//	}
//	/*char* ret =strtok(email, sep); 
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);*/
//	return 0;
//}


//#include<errno.h>
//int main()
//{
//
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		;
//	}
//	return 0;
//}

void* my_memcpy(void* dest,void* src,size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[] = { 0 };
	my_memcpy(arr2, arr1, 28);

	return 0;
}