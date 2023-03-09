#ifndef MOVE
#define MOVE

#include <string>

class Move {
    public:
     virtual bool beats(Move*) = 0;
     virtual std::string getType() = 0;

    private:
};

#endif