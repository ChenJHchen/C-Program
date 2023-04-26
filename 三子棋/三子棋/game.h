#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisPlayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

char ISwin(char board[ROW][COL], int row, int col);

// C 继续
// Q 平局
// '*' 玩家赢
// '#'  电脑赢