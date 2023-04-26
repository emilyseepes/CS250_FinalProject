#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <random>
#include <iostream>
#include <time.h>

using namespace std;
// Board ADT
class Board {
    public:
        //constructor/Destructor
        Board();
        ~Board();
        //Fills in Board with playing Pieces
        void initAraray();
        //Prints Board
        void printBoard();
        //Moves the pieces "X" amount of spaces & catches piece if it goes out of Bounds.
        void move_pieces();
        //Rolls dice
        int roll_dice();
        //Gets roll from dice
        int get_roll(){return roll;}
        //Supposed to swap players each round
        void swapPlayers();
        //The score total for each player
        int score();



    private:
        //18 Spots on board
        char bArray[18];
        //What dice rolled
        int roll;
        //What piece player wants to move
        char choice;




};

#endif // BOARD_H_INCLUDED
