#ifndef REFEREE_H
#define REFEREE_H
#include "Board.h"
#include "Player.h"
#include <iostream>

using namespace std;

class Referee
{
    public:
        Referee();
        ~Referee();
        void swapPlayers();
        int scores();
        int score;


    private:
        int roll;
        Player *p1;
        Player *p2;
        string current;
        Board gameBoard;
        //int score;
};

#endif // REFEREE_H
