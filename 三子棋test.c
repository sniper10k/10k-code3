# 10k-code3
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char ret = 0;
	char Qipan[Hang][Lie] = {0};
	CSHQipan(Qipan, Hang, Lie);	//初始化棋盘
	DaYinQipan(Qipan, Hang, Lie);	//打印棋盘
	while (1)
	{
		printf("玩家输入:>\n");
		PlayerMove(Qipan, Hang, Lie);	//玩家移动	*
		DaYinQipan(Qipan, Hang, Lie);
		ret = IsWin(Qipan, Hang, Lie);	//判断输赢	* # Q C
		if (ret != 'C')
		{
			break;
		}
		printf("电脑输入:>\n");
		ComputerMove(Qipan, Hang, Lie); //电脑移动	#
		DaYinQipan(Qipan, Hang, Lie);
		ret = IsWin(Qipan, Hang, Lie);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜!\n");
	}
	if (ret == '#')
	{
		printf("电脑获胜!\n");
	}
	if (ret == 'Q')
	{
		printf("平局!\n");
	}
}
void menu()
{
	printf("************************\n");
	printf("***** 1.play 0.exit ****\n");
	printf("************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束!\n");
			break;
		default:
			printf("输入错误!\n");
		}
	} while (input);
	return 0;
}
