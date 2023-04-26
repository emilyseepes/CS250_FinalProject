#include "Player.h"
#include "Board.h"
#include <iostream>

using namespace std;

//set and get players for points
Player::Player()
{
    //constructor for score
    score = 0;

}

void Player::operator++()
{
    //adds score per user
    score++;
}


Player::~Player()
{


}
