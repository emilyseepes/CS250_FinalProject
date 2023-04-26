#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
//#include "Board.h"
//#include "Referee.h"
#include <iostream>

using namespace std;


// Player ADT
class Player {

    public:
        int get_score(){return score;}
        Player();
        ~Player();


        void operator++();




    private:
        int score;

};

#endif // PLAYER_H_INCLUDED
