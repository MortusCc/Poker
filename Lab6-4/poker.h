#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct Poker
{
    char Suit[10];
    char Face[10];
}Poker;
void FillPokers(Poker* poker);
void Shuffle(Poker* poker);
void Deal(Poker* poker);
void Swap(Poker* poker, int i, int j);