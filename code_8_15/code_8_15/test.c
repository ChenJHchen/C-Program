#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//C�����Ǵ��������ĵ�һ�п�ʼ��
//����C��������main����,��������
//����ͷ�ļ�#include<stdio.h>
//�������ҽ���һ��main����,һ�����̿����ж��.c�ļ�
//���.c�ļ�ֻ��һ��main����
//int main()
//{
//	printf("hehehe\n");//�⺯��
//	return 0;
//}


//��������
//������ ,С��
//����,����

//�ַ� a,  �� a ��

//int main()
//{
//	//printf("%d\n", 100); // %d ��ӡһ������
//	//printf("%d\n", sizeof(char));
//	////sizeof - �ؼ���-- ��������--�������ͻ��߱�����ռ�ռ�Ĵ�С
//	//printf("%d\n", sizeof(short));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(long));
//	//printf("%d\n", sizeof(long long));
//	//printf("%d\n", sizeof(float));
//	//printf("%d\n", sizeof(double));
//	//��λ���ֽ�,����һ���ֽڵ���8������λ
//	//C���Ա�׼ ;sizeof(long)>=sizeof(int)
//
//
//	//�����ͳ���,����˼��
//	
//	//int age = 20;//����һ������
//
//	
//	return 0;
//}


//ȫ�ֱ����;ֲ�����
//int main()
//{
//	//�������ⲿ����ı�������ȫ�ֱ���,
//	//�������ڲ�����������Ǿֲ�����
//	//���ֲ�������ȫ�ֱ�������ʱ���ֲ�����
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);//���뺯��
//	sum = a + b;
//	printf("%d\n", sum);
//	//sancf_s -- VS�����ṩ�ģ�����C���Ա�׼�涨��
//
//	return 0;
//}


//���������������
//������:������ʹ�ã������������������
//�ֲ������������򣬾��Ǿֲ��������ڵľֲ���Χ
//ȫ�ֱ���������:��������
//extern int g_val;//��������
//
////��������������:
////�ֲ���������������:����ֲ���Χ�������ڿ�ʼ�����ֲ���Χ���������ڽ���
//// 
////ȫ�ֱ�������������:�������������
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//����:���ܸı����
//1.���泣�� ex:3.14,10 'a'."abcdef";
//const ���εĳ�����:
//��const���κ󣬾;��г����ԣ��������ϻ��Ǳ���

//#define����ı�ʶ������

//#define Max 10000;
//
//
////ö�ٳ�����һһ�оٵĳ���
//int main()
//{
//	//int arr[10] = { 0 };
//	//const int n = 10;
//	//int arr2[n] = { 0 };//n�Ǳ���
//	////������const���εı����������ϻ��Ǳ�������ֻ�Ǳ�const���β��ܸı�
//	int n = Max;
//	printf("%d\n", n);
//	return 0;






//ö�ٳ�����һһ�оٵĳ���
//enum Sex
//{
//	MALE = 4,//����ֵ,�����ı�����ֵ
//	FEMALE,
//	SECRET,
//
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	//ö�ٳ���Ĭ���Ǵ�0��ʼ
//	return 0;
//}


//�ַ���
// ��abcdef��,�����ַ��� ��\0��
//#include<string.h>
//int main()
//{
//	char arr[] = "hello";//hello\0,�ַ�����ĩβ����һ��\0,�����ַ����Ľ�����־
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//����,����\0�ǽ�����־
//
//
//	//strlen���ַ����ĳ���
//	int len = strlen("abc");
//	printf("%d\n", len);//���㳤��ʱ��\0���������
//	return 0;
//}




//ת���ַ�,����˼�壬ת��ԭ������˼
// \ddd ���� ddd ��ʾ1  -3 �˽��Ƶ�����

// \dd ,dd��ʾ16����
//int main()
//{
//	//printf("c:\\test\\test.c\n");
//	//printf("c:\test\test.c");// \t s��һ��ת���ַ�,�ټ�\t�͵���ת��
//
//
//	printf("%c\n", '\130');//ASCII//��ӡ��ʮ����
//	printf("%c\n",'\x30');
//	return 0;
//}


//ѡ�����
//ѭ�����

//����
//int ADD(int x, int y)//��������
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	int sum = ADD(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//




//���� һ����ͬ����Ԫ�صĵļ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����Ĵ����ͳ�ʼ��
//	//���������±��Ǵ�0��ʼ 0 -1  1-2
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//			i++;
//	}
//	return 0;
//}




//��������


// '/'ֻҪ������һ����С���������ľ���С������

int main()
{
	//int a = 2;
	//int b = a << 1; //���Ʋ�����,�ƶ�����һ��������λ,�Ҷ˲�0


	////sizeof�������ͻ��߱����Ĵ�С
	//int a = 10;
	//pritnf("%d\n", sizeof(int));
	//pritnf("%d\n", sizeof(a)); // ���ſ�ʡ�ԣ�����sizeof ��һ����������

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//������������ܴ�С
	printf("%d\n", sizeof(arr[0]));//�������һ��Ԫ�صĴ�С
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	printf("%d\n", sz);
	

	return 0;
}