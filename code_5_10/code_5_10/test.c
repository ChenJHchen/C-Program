#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	printf("my first c program\n");
//	return 0;
//}



//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//
//	return 0;
//}

//int a = 3;
//int main()
//{
//	int a = 0;
//	
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("������������:>\n");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//#define MAX 100
//enum Sex
//{
//	male,
//	female,
//	secret,
//};
//int main()
//{
//
//
//	const int a = 3;
//	printf("%d\n", MAX);
//
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'h','e','l','l','o' };
//	char arr3[] = { 'h','e','l','l','o','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%s\n", arr3);
//	return 0;
//

//}

//int main()
//{
//	printf("c:\\code\\test.c\n");
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%c\n", '\\');
//
//
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen("c:\test\628\test.c"));
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	printf("study?\n");
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while (a <9)
//	{
//		a++;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	
//
//	for(a=1;a<9;a++)
//		printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//    printf("�������\n");
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("%d:��Ҫ����Ŭ���ô���\n",line);
//    }
//    if (line > 20000)
//        printf("��offer\n");
//    return 0;
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = add(a,b);
//	
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (a = 0; a < 10; a++)
//	{
//		printf("%d\n", arr[a]);
//
//	}
//
//	return 0;
//}

//typedef long long int ll_int;
//int main()
//{
//	ll_int a = 0;
//
//
//
//	return 0;
//}


//void test()
//{
//    int i = 0;//ÿ�����㶼��i��Ϊ0
//   
//    i++;
//   
//
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}

//void test()
//{
//    //static���ξֲ�����
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//  
//     int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}




//static int g_val = 2018;
////һ��ȫ�ֱ�����static���Σ�ʹ�����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ
////�á�
//int main()
//{
//    printf("%d\n", g_val);
//    return 0;
//}

//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    printf("%d\n", Add(2, 3));
//    return 0;
//}

//static int Add(int x, int y)
//{
//    return x + y;
//}
////һ��������static���Σ�ʹ���������ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ�á�
//int main()
//{
//    printf("%d\n", Add(2, 3));
//    return 0;
//}


//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//    int sum = ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    return 0;
//}


//int main()
//{
//    int num = 10;
//    &num;
//    
//    printf("%p\n", &num);
//    return 0;
//}


//int main()
//{
//    int num = 10;
//    int* p = &num;
//    *p = 20;
//    printf("%d\n", num);
//    printf("%p\n", p);
//
//    return 0;
//}


//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}
//struct Stu
//{
//    char name[20];//����
//    int age;      //����
//    char sex[5];  //�Ա�
//    char id[15]; //ѧ��
//};
//int main()
//{
//    struct Stu s = { "����",20, "��","201213165"};
//    //.Ϊ�ṹ��Ա���ʲ�����
//    printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//    //->������
//    struct Stu* ps = &s;
//    printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
//
//
//    return 0;
//}