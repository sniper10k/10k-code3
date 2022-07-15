# 10k-code3
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void CSHQipan(char Qipan[Hang][Lie], int hang, int lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			Qipan[i][j] = ' ';
		}
	}
}

void DaYinQipan(char Qipan[Hang][Lie], int hang, int lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			printf(" %c ",Qipan[i][j]);
			if (j < lie - 1)
				printf("|");
		}
		printf("\n");
		if (i < hang - 1)
		{
			for (j = 0; j < lie; j++)
			{
				printf("---");
				if (j < lie - 1)
				{
					printf("|");
				}
			}
		printf("\n");
		}
	}
}
void PlayerMove(char Qipan[Hang][Lie], int hang, int lie)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= hang && j >= 1 && j <= lie)
		{
			if (' ' == Qipan[i-1][j-1])
			{
				Qipan[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("请重新输入:>\n");
			}
		}
		else
			printf("输入错误,请重新输入:>\n");
	}
}
void ComputerMove(char Qipan[Hang][Lie], int hang, int lie)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		i = rand() % hang;
		j = rand() % lie;
		if (' ' == Qipan[i][j])
		{
			Qipan[i][j] = '#';
			break;
		}
	}
}
char IsWin(char Qipan[Hang][Lie], int hang, int lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			if (Qipan[i][j] != ' ')
			{
				if (Qipan[i][0] == Qipan[i][1] && Qipan[i][1] == Qipan[i][2] && Qipan[i][1] != ' ')
				{
					return Qipan[i][1];
				}
				if (Qipan[0][j] == Qipan[1][j] && Qipan[1][j] == Qipan[2][j] && Qipan[1][j] != ' ')
				{
					return Qipan[1][j];
				}
				if (Qipan[0][0] == Qipan[1][1] && Qipan[1][1] == Qipan[2][2] && Qipan[1][1] != ' ')
				{
					return Qipan[1][1];
				}
				if (Qipan[0][2] == Qipan[1][1] && Qipan[1][1] == Qipan[2][0] && Qipan[1][1] != ' ')
				{
					return Qipan[1][1];
				}
				return 'C';
			}
			else
				return 'Q';
		}
	}
}
