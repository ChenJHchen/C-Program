#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}\


//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,",sum(a));
//	}
//	return 0;
//}


//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("*************\n");
//	printf("*************\n");
//	printf("*************\n");
//
//
//	return 0;
//}


//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
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
//	int age = 70;
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//		
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//		// switch���� ֻ���ǳ������ͱ��ʽ
//	{
//	case 1:
//      //caseֻ���ǳ������ͱ��ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//
//	case 3:
//		printf("������\n");
//		break;
//
//	case 4:
//		printf("������\n");
//		break;
//
//	case 5:
//		printf("������\n");
//		break;
//	
//	case 6:
//		printf("������\n");
//		break;
//	default:
//		printf("��������\n");
//		break;
//	
//
//	}
//	return 0;
//}



//int main()
//{
//	//��whileѭ���У�break���õ���ֹѭ��
//	//��whileѭ���У�contiune ��������ѭ��continue����Ĵ���
//	//ֱ��ȥ�жϲ��֣������Ƿ������һ��ѭ��
//	int i = 1;
//	while (i <=10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//����\n
//	int tmp = 0;
//   //����������������
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}