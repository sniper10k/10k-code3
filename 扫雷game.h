# 10k-code3
#define _CRT_SECURE_NO_WARNINGS 1

#define Hang 9
#define Lie 9
#define HangS Hang+2
#define LieS Lie+2
#define Count 10

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void CSHQipan(char board[HangS][LieS], int hangs, int lies, char set);
void DYQipan(char board[HangS][LieS], int hang, int lie);
void LEIZI(char board[HangS][LieS], int hang, int lie);
void SAOLEI(char shuzi[HangS][LieS], char fuhao[HangS][LieS], int hang, int lie);
