#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0; //  -1
//	//-1
//	//�ڼ�����У��������ڴ��д�ŵ��ǲ���
//	//�� ԭ�� ���� ����
//	//����������������ͬ
//	// ���� 0 :  10000000000000000000000000000001  ԭ��
//	//           11111111111111111111111111111110  ����
//	//           11111111111111111111111111111111  ����    
//	//�������ԭ�� ���ڴ��ڴ��д�ŵ��ǲ���
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int b = ++a;
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	//ǰ��++  ������ ��ʹ��
//
//	//int a = 10;
//	//int b = a++;
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	//���� ++  ��ʹ�� ������ 
//
//	
//
//	return 0;
//}

//int main()
//{
//
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d\n", a);
//	return 0;




//��ϵ������
//int main()
//{
//	/*int a = 3;
//	int b = 5;*/
//	// && ͬʱΪ�� ��Ϊ��
//	// || ��1��Ϊ��  ��Ϊ��
//
//	//����������
//	// exp1? exp2 : exp3
//	//���ʽ1���� ����ʽ�� ������ʽ ��
//	//int a = 0;
//	//int b = 3;
//	//int max = 0;
//	//max = (a > b ? a : b);
//	//printf("%d\n", max);
//
//
//	//���ű��ʽ �����һ�����ʽ��ֵ
//
//	//int a = 0;
//	//int b = 3;
//	//int c = 5;
//	//int d = (a = b + 2, c = a - 4, b = c + 2);
//	//printf("%d\n", d);
//
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n",arr[5]//[] С�����ò�����
//
//
//	//printf("hehe\n");// ()  �������ò�����
//
//	//�ؼ���  ��c�����ṩ�� �����Լ����� ������������
//
//
//	// auto  ÿ���ֲ���������auto���ε�
//	//{
//	//	int a = 10;  //�Զ��������Զ�����  ����auto һ��ʡ��
//	//}
//
//	// extern �����������ⲿ���ŵ�
//	// register �Ĵ��� �ؼ���
//
//	//register int num = 100;// ����num��ֵ���ڼĴ�����
//	//����Ƶ��ʹ�õı��� ���ڼĴ��� Ч�ʸ���
//
//	//signed ����
//	//unsigned �޷���
//	//static ��̬
//	//union ������
//	//volatile  ��λ
//	// define include ���ǹؼ���  ������Ԥ����ָ��
//	
//
//
//
//	// typedef �����ض���
//
//	unsigned int num = 100;
//
//
//	return 0;
//}


//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//
//	// 1 static ���ξֲ�����
//	// static ����ȫ�ֱ���
//	// static ���κ���
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}




//void test()
//{
//	 static int a = 1;//static���εľֲ����� �ڳ����ľֲ���Χ������
//	 //�ı�ֲ���������������,�������Ǹı�Ĵ洢����
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//
//	// 1 static ���ξֲ�����
//	// static ����ȫ�ֱ���
//	// static ���κ���
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern int g_val;
////ȫ�ֱ������������̶�����ʹ��
////static ����ȫ�ֱ���,ʹ��ȫ�ֱ���ֻ�����Լ�Դ�ļ�ʹ��,����Դ�ļ�����ʹ��
////ȫ�ֱ��� ������Դ�ļ�����ʹ�ã�����Ϊȫ�ֱ���������������
////��static���κ�ͱ�����ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ�����!
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}





//static���κ���

//ͬ��static����ȫ�ֱ�������
//extern int ADD(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//define ���峣���ͺ�
//#define ADD(X,Y) (X+Y)
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}




//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ� 4���ֽ�
//	// &a �õ����ǵ�һ����ַ
//	printf("%p ", &a);//%pר�Ŵ�ӡ��ַ
//	int * pa = &a;//pa��������ŵ�ַ ��c������pa��ָ�����
//	// * ˵�� pa��ָ�����
//	//int ˵��paִ�еĶ�����int����
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;// * ������ *pa����ͨ��pa����ĵ�ַ �ҵ�a
//	printf("%d\n", a);
//	return 0;
//}

//ָ����ǵ�ַ



//ָ������Ĵ�С

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	//ָ���С����ͬ��
//	//��Ϊָ����������ŵ�ַ��
//	//ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
//
//	//����32λ4�ֽ�
//	//64λ8�ֽ�
//	return 0;
//}



//�ṹ��
struct Stu
{
	char name[20];
	int age;
	double score;
};
struct Book
{
	char name[20];
	float price;
	char id[30];

};
int main()
{
	struct Stu s = { "����",20,85.5 };
	printf("%s %d %lf\n", s.name, s.age, s.score);
	struct Stu *ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}