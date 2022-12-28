#define _CRT_SECURE_NO_WARNINGS

#include "game2.h"
void game()
{
	char mine[ROWS][COLS]={0};//布置雷的数组
	char show[ROWS][COLS]={0};//排查雷的数组
	//1.初始化数组
	Init_board(mine,ROWS,COLS,'0');//初始化函数mine棋盘
	Init_board(show, ROWS,COLS,'*');//初始化show棋盘
	//2.打印数组’；只要打印9*9就可以了传ROW就可以了
	
	DisplayBoard(show, ROW, COL);
	//3.布置雷
	set_mine(mine, ROW, COL,COUNT);
	DisplayBoard(mine, ROW, COL);
	//4.排查雷
	CheckBoard(mine, show, ROW, COL);
	DisplayBoard(show, ROW, COL);

}
void menu()
{
	printf("***************************\n");
	printf("*******   1.play   ********\n");
	printf("*******   0.exit   ********\n");
	printf("***************************\n");
}
void test()
{
	int intput;
	srand(time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:game();break;
		case 0:printf("退出游戏\n");break;
		default:printf("请重新输入：\n");break;
		}
	} while (intput);
	
	
}
int main()
{
	test();
	return 0;
}