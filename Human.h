#ifndef HUMAN
#define HUMAN

#include "Player.h"

#include <iostream>

class Human : public Player {
    public:
     Human();
     Move* makeMove();
};

#endif