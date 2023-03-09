#ifndef NINJA
#define NINJA

#include "Move.h"
#include <string>

class Ninja : public Move {
    public:
     bool beats(Move *);
     std::string getType() { return "Ninja"; };
};

#endif