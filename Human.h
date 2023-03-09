#ifndef HUMAN
#define HUMAN

#include "Player.h"

#include <string>

class Human : public Player {
    public:
     Human();
     Human(std::string);
     Move* makeMove();
};

#endif