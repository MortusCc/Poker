#include "poker.h"
int main()
{
    Poker poker[52];
    FillPokers(poker);
    srand(time(NULL));
    Shuffle(poker);
    Deal(poker);
    return 0;
}

