# 10k-code3
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char shuzi[HangS][LieS] = { 0 };
	char fuhao[HangS][LieS] = { 0 };
	//初始化棋盘;
	CSHQipan(shuzi, HangS, LieS, '0');
	CSHQipan(fuhao, HangS, LieS, '*');
	//打印棋盘;
	DYQipan(fuhao, Hang, Lie);
	//随机产生雷子;
	LEIZI(shuzi, Hang, Lie);
	//DYQipan(shuzi, Hang, Lie);	////取消此行注释查看具体雷子位置;
	//开始扫雷;
	SAOLEI(shuzi,fuhao,Hang,Lie);
}
void menu()
{
	printf("************************\n");
	printf("******** 1.play ********\n");
	printf("******** 0.exit ********\n");
	printf("************************\n");
}
void test()
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
			printf("输入错误,请重新输入!\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
