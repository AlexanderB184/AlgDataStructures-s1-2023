#ifndef ROCK
#define ROCK

#include "Move.h"
#include <string>

class Rock : public Move{
    public:
     bool beats(Move *);
     std::string getName() { return "Rock"; };
};

#endif