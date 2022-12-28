//��װ����
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
	printf("----------ɨ��-----------\n");
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
	printf("----------ɨ��-----------\n");
}
void set_mine(char mine[ROWS][COLS], int row, int col,int count)
{
	//�����׵ķ�Χ�Ϸ�
	//1.��������
	//2.������
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		//�ж��Ƿ��Ѿ�����
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
	printf("������Ҫ�Ų�����꣺\n");
	//�Ų�mine��x��y���꣬�������ը��������������Ų���Χ�Ƿ����ף�Ȼ�󽫽�����ص�show��Ӧ��x��y�����ϡ�
	while (1)
	{
		
		scanf("%d%d", &x, &y);
		//�жϺϷ���
		if (x > 0 && x <= row && y>0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("��Ǹ���㱻ը����\n");
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
			printf("����������������룺\n");
		}
	}
}