#include "poker.h"
void FillPokers(Poker* poker)
{
    char* suit[] = { "Spades","Hearts","Clubs","Diamonds" };
    char* face[] = { "A","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };
    for (int i = 0; i < 52; i++)
    {
        strcpy(poker[i].Suit, suit[i / 13]);
        strcpy(poker[i].Face, face[i % 13]);
    }
}
void Shuffle(Poker* poker)
{
    for (int i = 0; i < 10000; i++)
    {
        int j = rand() % 52;
        int k = rand() % 52;
        Swap(poker, j, k);
    }
}
void Deal(Poker* poker)
{
    for (int i = 0; i < 52; i++)
    {
        printf("%10s %10s\n", poker[i].Suit, poker[i].Face);
    }
}
void Swap(Poker* poker, int i, int j)
{
    Poker temp = poker[i];
    poker[i] = poker[j];
    poker[j] = temp;
}