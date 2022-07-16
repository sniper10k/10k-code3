# 10k-code3
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void CSHQipan(char board[HangS][LieS], int hangs, int lies, char set)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < hangs; x++)
	{
		for (y = 0; y < lies; y++)
		{
			board[x][y] = set;
		}
	}
}

void DYQipan(char board[HangS][LieS], int hang, int lie)
{
	int x = 1;
	int y = 1;
	for (x = 0; x <= hang; x++)
	{
		printf("%d ", x);
	}
	printf("\n");
	for (x = 1; x <= hang; x++)
	{
		printf("%d ", x);
		for (y = 1; y <= lie; y++)
		{
			printf("%c ", board[x][y]);
		}
		printf("\n");
	}
}

void LEIZI(char board[HangS][LieS], int hang, int lie)
{
	int count = Count;
	while (count)
	{
		int x = rand() % Hang + 1;
		int y = rand() % Lie + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void SAOLEI(char shuzi[HangS][LieS], char fuhao[HangS][LieS], int hang, int lie)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int count = 0;
	while (win<hang*lie-Count)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= hang && y > 0 && y <= lie)
		{
			if (shuzi[x][y] == '1')
			{
				printf("踩到雷,游戏结束!\n");
				DYQipan(shuzi, Hang, Lie);
				break;
			}
			else
			{
				count = get_count(shuzi, x, y);
				fuhao[x][y] = count + '0';		//根据ASCII表	数字+'0'变成符号数字
				DYQipan(fuhao, Hang, Lie);
				win++;
			}
		}
		else
		{
			printf("输入错误,重新输入!\n");
		}
	}
	if (win == hang * lie - Count)
	{
		printf("恭喜玩家获胜!\n");
	}
}
int get_count(char shuzi[HangS][LieS], int x, int y)
{
	return shuzi[x - 1][y - 1] +
		shuzi[x - 1][y] +
		shuzi[x - 1][y + 1] +
		shuzi[x][y - 1] +
		shuzi[x][y + 1] +
		shuzi[x + 1][y - 1] +
		shuzi[x + 1][y] +
		shuzi[x + 1][y + 1] - 8 * '0';		//根据ASCII表	符号数字-'0'变成整形数字
}
