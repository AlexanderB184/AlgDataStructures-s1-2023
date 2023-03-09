#ifndef MOVE
#define MOVE

#include <string>

class Move {
    public:
     virtual bool beats(Move*) = 0;
     virtual std::string getName() = 0;

    private:
};

#endif