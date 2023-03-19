 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//
//	//指针大小为什么相同？
//	//
//}


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
	struct Stu s = { "张三",20,85.5 };
	printf("1:%s %d %lf\n", s.name, s.age, s.score);
	struct Stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}