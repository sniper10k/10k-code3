# 10k-code3
#define _CRT_SECURE_NO_WARNINGS 1

#define Hang 3
#define Lie 3

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void CSHQipan(char Qipan[Hang][Lie], int hang, int lie);
void DaYinQipan(char Qipan[Hang][Lie], int hang, int lie);
void PlayerMove(char Qipan[Hang][Lie], int hang, int lie);
void ComputerMove(char Qipan[Hang][Lie], int hang, int lie);
char IsWin(char Qipan[Hang][Lie], int hang, int lie);
