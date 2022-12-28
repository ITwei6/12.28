#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 10
#define ROWS ROW+2
#define COLS COL+2//º¯ÊýµÄÉùÃ÷
void Init_board(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void set_mine(char mine[ROWS][COLS], int row, int col,int count);
void CheckBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int row, int col);