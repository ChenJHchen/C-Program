#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	printf("Hello World\n");
//
//	//��c������ֻ��Ψһ��main���������ǳ�������
//	return 0;
//}

//int main()
//{
//    printf("%d\n", sizeof(char));//1
//    printf("%d\n", sizeof(short));//2
//    printf("%d\n", sizeof(int));//4
//    printf("%d\n", sizeof(long));//4
//    printf("%d\n", sizeof(long long));//8
//    printf("%d\n", sizeof(float));//4
//    printf("%d\n", sizeof(double));//8
//    printf("%d\n", sizeof(long double));//8
//    return 0;
//
//
//    //c�����г��õ���������
//}


//���ھֲ�������ȫ�ֱ�����ʹ��
//int num1 = 10000;//ȫ�ֱ���
//int main()
//{
//	int num2 = 2022;//�ֲ�����
//	int num1 = 2023;
//	printf("%d\n", num1);
//	//���ֲ�������ȫ�ֱ���ͬ��ʱ�����ȿ��Ǿֲ�����
//
//	return 0;
//}

//������ʹ��
//int main()
//{
//	int num1 = 0;//�ڶ���һ������ʱҪ��ʼ��
//	int num2 = 0;
//	printf("������������:>");
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//���ڱ��������������������
//1. �ֲ��������������Ǳ������ڵľֲ���Χ��
//2. ȫ�ֱ��������������������̡�
//��������
//��������������ָ���Ǳ����Ĵ���������������֮���һ��ʱ���
//1. �ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
//2. ȫ�ֱ��������������ǣ�����������������ڡ�


//c�����еĳ���

//1.enmu����
//int main()
//{
//    enum Sex 
//    {
//        MALE,
//        FEMALE,
//        SECRET
//    };
//   
//   
//
//       
//        //#define�ı�ʶ������ ��ʾ
//        #define MAX 100
//        printf("max = %d\n", MAX);
//
//        //ö�ٳ�����ʾ
//        enum Sex s = MALE;
//        printf("%d\n", MALE);//0
//        printf("%d\n", FEMALE);//1
//        printf("%d\n", SECRET);//2
//        printf("%d\n", s);//0
//        //enmuĬ���Ǵ�0��ʼ�����μ�1��
//	return 0;
//}
//


//�ַ������ַ�

//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = { 'b', 'i', 't' };
//    char arr3[] = { 'b', 'i', 't','\0' };
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//    //�ַ����к���Ĭ���и�0��Ϊ������־,�ַ���Ҫ�ں������\0��Ϊ������־
//    return 0;
//}



//ת���ַ�
//int main()
//{
//    printf("c:\code\\test.c\n");
//    return 0;
//}



//ѡ�����
//int main()
//{
//    int coding = 0;
//    printf("���ú�ѧϰ�𣿣�ѡ��1 or 0��:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("��֣�����к�offer\n");
//    }
//    else
//    {
//        printf("�������ؼҰ�ש\n");
//    }
//    return 0;
//}

//ѭ����䣬whileѭ��

//int main()
//{
//    printf("�ú�ѧϰ\n");
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("�ô���;%d\n",line);
//    }
//    if (line > 20000)
//        printf("��offer\n");
//    return 0;
//}


//����
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("��������������:>");
//    scanf("%d %d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("sum = %d\n", sum);
//    return 0;
//}


//����
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ���������飬����10��Ԫ��
//�����±��Ǵ�0��ʼ��1-0..........10-9

//int main()
//{ //��ӡ�����е�ȫ��Ԫ��
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


//typedef
//typedef unsigned int uint_32;
//int main()
//{
//    //���ǰ�unsigned int��Ϊuint_32 ��ʵ��������һ����˼
//    unsigned int num1 = 0;
//    uint_32 num2 = 0;
//    return 0;
//}

//static�ؼ���
//void test()
//{//��ӡ10��1���ڵ���test������iʼ����1
//    int i = 0;
//    i++;
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
//{//��ӡ1��10
//    //��Ϊ����static����һ���ֲ�����ʱ���ͱ�ʾ����һ����̬�ֲ�����
//  /* ��ʹ��test������i����һ�ε�ֵ�����Դ�ӡ1��10*/
//    static int i = 0;//ʹ��statci�����벻ִ��
//    i++;
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


//static����ȫ�ֱ���
//��һ��ȫ�ֱ�����static���Σ�ʹ�����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ
//�û���һ��������static���Σ�ʹ���������ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ��



// define�����ʶ������
//#define MAX 1000
////define�����
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
//    int* p = &num;
//    *p = 20;
//    printf("%d\n", *p);
//    return 0;
//}

//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'q';
//    printf("%c\n", ch);
//    return 0;
//}

// ָ������Ĵ�Сȡ���ڵ�ַ�Ĵ�С
//32λƽ̨�µ�ַ��32��bitλ����4���ֽڣ�
//64λƽ̨�µ�ַ��64��bitλ����8���ֽڣ�
//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}


//�ṹ��

//struct Stu
//{
//    char name[20];//����
//    int age;      //����
//    char sex[5];  //�Ա�
//    char id[15]; //ѧ��
//};
//int main()
//{
//    //��ӡ�ṹ����Ϣ
//    struct Stu s = { "����",20,"��", "20180101" };
//    //.Ϊ�ṹ��Ա���ʲ�����
//    printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//    //->������
//    struct Stu* ps = &s;
//    printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
//    return 0;
//}