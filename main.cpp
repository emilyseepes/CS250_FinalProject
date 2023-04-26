#include <iostream>
#include "Board.h"
#include "Referee.h"
#include "Player.h"

using namespace std;

int main()
{
    bool q = true;
    Board b;
    Board p;
    b.initAraray();
   // p.swapPlayers();
    while(q == true){
        b.printBoard();
    }


    return 0;
}
