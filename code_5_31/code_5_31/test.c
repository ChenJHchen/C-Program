#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strstr(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while ( *s1 != '\0' && *s2 != '\0' &&  *s1 == *s2)
//		{
//			s1++;
//			s2++;
//
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char email[] = "hhhhhh@qq.com";
//	char ss[] = "qq";
//	char* ret = my_strstr(email, ss);
//	if (ret == NULL)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes is %s\n",ss);
//	}
//
//	return 0;
//}



//int main()
//{
//	const char* sep = "@.";
//	char email[] = "hhhhhh@qq.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//	char* ret = strtok(cp,sep);
//	ret = strtok(NULL, sep);
//	printf("%s\n",ret);
//	ret = strtok(NULL,sep);
//	printf("%s\n", ret);
//	return 0;
//}

void* my_memcpy(void* dest, const void* src, size_t num)
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
	int arr1[] = { 1,2,3,4,5,6,7, };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1,28);
	return 0;
}