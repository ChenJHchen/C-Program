#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//std ��׼�������
//int main()
//C���Դ�����һ��Ҫ��main����
//������
//��׼������д��
// int ��������
//main�Ǻ�������� ��ֻ����һ��

//{
//	printf("hello world\n");
////printf��һ���⺯�� ר�Ŵ�ӡ����
//
//	return 0;
//
//}

int main()
{
	printf("%zu\n",sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
//��λ���ֽ�
//1�ֽ� = 8����λ
//����C���Թ涨 sizeof(long)>=sizeof(int)
//1
//2
//4
//4
//8
//4
//8

	return 0;
}