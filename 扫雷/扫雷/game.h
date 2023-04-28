#pragma once
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include<time.h>
#include<stdlib.h>

#include<stdio.h>


void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);

void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char board[ROWS][COLS], char[ROWS][COLS],int row,int col);