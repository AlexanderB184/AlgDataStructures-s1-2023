#ifndef MOVECON
#define MOVECON
#include "Move.h"
#include <string>

class MoveConstructor {
    public:
     static Move * stringToMove(std::string);
};

#endif