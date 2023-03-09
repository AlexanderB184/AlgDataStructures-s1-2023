#ifndef SCISSORS
#define SCISSORS

#include "Move.h"
#include <string>

class Scissors : public Move {
    public:
     bool beats(Move *);
     std::string getName() { return "Scissors"; };
};

#endif