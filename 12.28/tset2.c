#define _CRT_SECURE_NO_WARNINGS

#include "game2.h"
void game()
{
	char mine[ROWS][COLS]={0};//�����׵�����
	char show[ROWS][COLS]={0};//�Ų��׵�����
	//1.��ʼ������
	Init_board(mine,ROWS,COLS,'0');//��ʼ������mine����
	Init_board(show, ROWS,COLS,'*');//��ʼ��show����
	//2.��ӡ���顯��ֻҪ��ӡ9*9�Ϳ����˴�ROW�Ϳ�����
	
	DisplayBoard(show, ROW, COL);
	//3.������
	set_mine(mine, ROW, COL,COUNT);
	DisplayBoard(mine, ROW, COL);
	//4.�Ų���
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
		printf("��ѡ��");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:game();break;
		case 0:printf("�˳���Ϸ\n");break;
		default:printf("���������룺\n");break;
		}
	} while (intput);
	
	
}
int main()
{
	test();
	return 0;
}