#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int  i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//for(n = 1;n <= 3;n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	sum = sum + ret;
//	//}
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	
//	}
//
//
//	printf("%d", sum);
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main() {
//    char image[][100] = {
//        "    ���������������[�������������[ ���������������[",
//        "    �����X�T�T�T�T�a�����X�T�T�����[�����X�T�T�T�T�a",
//        "    �����������[  �������������X�a�����������[  ",
//        "    �����X�T�T�a  �����X�T�T�T�a �����X�T�T�a  ",
//        "    �����U     �����U     ���������������["
//    };
//
//    int rows = sizeof(image) / sizeof(image[0]);
//    for (int i = 0; i < rows; i++) {
//        printf("%s\n", image[i]);
//    }
//
//    return 0;
//}


//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//
//
//	}
//	if (i == 3)
//		printf("���������������\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    printf("�����������������[�������������[ �������[   �������[���������������[\n");
//    printf("�^�T�T�����X�T�T�a�����X�T�T�����[���������[ ���������U�����X�T�T�T�T�a\n");
//    printf("   �����U   �������������X�a�����X���������X�����U�����������[  \n");
//    printf("   �����U   �����X�T�T�T�a �����U�^�����X�a�����U�����X�T�T�a  \n");
//    printf("   �����U   �����U     �����U �^�T�a �����U���������������[\n");
//    printf("   �^�T�a   �^�T�a     �^�T�a     �^�T�a�^�T�T�T�T�T�T�a\n");
//
//    return 0;
//}



#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("********1.0 play****************\n");
	printf("********2.0 exit****************\n");
	printf("********************************\n");

}
void game()
{
	
	int ret = rand()%100+1;
	//printf("%d\n", ret);
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		
		menu();
		printf("��ѡ�� :>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ���������ѡ��\n");
			break;

		}
	} while (input);

	return 0;
}