#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("*******1. play  0. exit**\n");
	printf("*************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisPlayBoard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = ISwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisPlayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		ret = ISwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisPlayBoard(board, ROW, COL);

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisPlayBoard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
		return 0;
}