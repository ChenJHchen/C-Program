#define _CRT_SECURE_NO_WARNINGS

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	return 0;
//}
//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print1(s);
//	print2(&s);
//	return 0;
//}
#include "contact.h"
void menu()
{
	printf("**********************************\n");
	printf("****1.add     2.del***************\n");
	printf("****3.serach  4.modify************\n");
	printf("****5.0 show  6.sort**************\n");
	printf("****0.0 exit   *******************\n");
	printf("**********************************\n");

}

int main()
{
	int input = 0;
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SerachContact(&con);
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	
	return 0;
}