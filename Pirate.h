#ifndef PIRATE
#define PIRATE

#include "Move.h"
#include <string>

class Pirate : public Move {
    public:
     bool beats(Move *);
     std::string getName() { return "Pirate"; };
};

#endif