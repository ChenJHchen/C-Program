#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>
#include<assert.h>
// err
//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0 '&& *s2!='\0' &&  * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0');
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("no\n");
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
//	char email[] = "chen@qq.com";
//	char cp[60] = { 0 };
//	strcpy(cp, email);
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep);
//		ret != NULL;
//		ret=strtok(NULL,sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(email, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//
//	return 0;
//}

//
//#include<errno.h>
//int main()
//{
//
//
//
//	FILE* pf = fopen("test,txt", "r");
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
void* my_memcpy(void* dest,void *src,size_t num)
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
	int arr2[10] = { 0 };
	my_memcpy(arr2,arr1,28);


	return 0;
}