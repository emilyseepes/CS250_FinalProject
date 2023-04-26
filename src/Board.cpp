#include "Board.h"
#include "Player.h"
#include "Referee.h"
#include <iostream>

using namespace std;


Board::Board(){

    srand(time(NULL));


}
//Places pieces and generates correct placement of pieces
void Board::initAraray(){

    bArray[0] = 'A';
    bArray[1] = '1';
    bArray[2] = '2';
    bArray[3] = ' ';
    bArray[4] = ' ';
    bArray[5] = ' ';
    bArray[6] = ' ';
    bArray[7] = '3';
    bArray[8] = '4';
    bArray[9] = '5';
    bArray[10]= 'E';
    bArray[11] = 'D';
    bArray[12] = 'C';
    bArray[13] = ' ';
    bArray[14] = ' ';
    bArray[15] = ' ';
    bArray[16] = ' ';
    bArray[17] = 'B';
}

//Prints display of Board
void Board::printBoard(){

cout << "           --- " << endl;
cout << "           |" << bArray[16]<< "|" << endl;
cout << "           --- " << endl;
cout << "           |" << bArray[15] << "|" << endl;
cout << "           --- " << endl;
cout << "           |" << bArray[14] << "|" << endl;
cout << "           --- " << endl;
cout << "           |" << bArray[13] << "|" << endl;
cout << "         -------" << endl;
cout << "         |" << bArray[17] <<"|" << bArray[12] << "|" <<bArray[11]<< "|" << endl;
cout << "       -----------" << endl;
cout << "       |" << bArray[0] << "|     |" <<bArray[10] << "|" << endl;
cout << "       -----------" << endl;
cout << "       |" << bArray[1] << "|     |" <<bArray[9] << "|" << endl;
cout << "       -----------" << endl;
cout << "         |" << bArray[2] << "|" <<bArray[7] << "|" << bArray[8] << "|" << endl;
cout << "         -------" << endl;
cout << "           |" << bArray[3] << "|" << endl;
cout << "           --- " << endl;
cout << "           |" <<bArray[4] << "|" << endl;
cout << "           --- " << endl;
cout << "           |" <<bArray[5] << "|" << endl;
cout << "           --- " << endl;
cout << "           |" <<bArray[6] << "|" << endl;
cout << "           --- " << endl;

//Rolls dice and outputs it on screen
//Lets player make decision on what piece to move where

roll_dice();
cout << "ROLL: ";
cout << roll<< "\n";
cout << "Select Piece: ";
cin >> choice;



//Piece is moved
move_pieces();

}

// Catches players piece if it goes out of bounds
// If not, piece is moved to it's proper spot

void Board::move_pieces(){
int x;
int isGreater_than18;
for(int i = 0; i < 18; i++){
    if(choice == bArray[i]){
        x = i;
        cout << "PIECE OUT OF BOUNDS" <<endl;
        break;
    }

}
//Checks to make sure it is not out of bounds
//If it is, piece moves to closest location in bounds
    if((x+get_roll()) > 18)
    {
        isGreater_than18 = (x + get_roll()) - 18;
    }
    if(bArray[isGreater_than18] == ' '){
        swap(bArray[x], bArray[isGreater_than18]);
    }
    else if(bArray[x+roll_dice()] == ' '){
                swap(bArray[x], bArray[x+get_roll()]);
    }
}

//Rolls dice numbers 1-6
int Board::roll_dice(){

    roll = rand()%6+1;

    return roll;
}


Board::~Board(){



}
