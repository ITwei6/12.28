//分装函数
#include "game2.h"
void Init_board(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i, j;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("----------扫雷-----------\n");
	int i, j;
	for (i = 0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i =1;i <=row;i++)
	{
		printf("%d", i);
		for (j = 0;j < col;j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷-----------\n");
}
void set_mine(char mine[ROWS][COLS], int row, int col,int count)
{
	//布置雷的范围合法
	//1.生成坐标
	//2.布置雷
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		//判断是否已经有雷
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{

	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}
void CheckBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	printf("请输入要排查的坐标：\n");
	//排查mine的x，y坐标，如果是雷炸死，如果不是雷排查周围是否有雷，然后将结果返回到show对应的x，y坐标上。
	while (1)
	{
		
		scanf("%d%d", &x, &y);
		//判断合法性
		if (x > 0 && x <= row && y>0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("抱歉，你被炸死了\n");
				DisplayBoard(mine, x, y);
				break;
			}
			else
			{
				
				int n= get_mine_count(mine, ROW, COL);
				show[x][y] = n + '0';
				DisplayBoard(show, ROW, COL);
			}

		}
		else
		{
			printf("输入错误，请重新输入：\n");
		}
	}
}