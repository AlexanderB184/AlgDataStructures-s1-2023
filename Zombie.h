#ifndef ZOMBIE
#define ZOMBIE

#include "Move.h"
#include <string>

class Zombie : public Move {
    public:
     bool beats(Move *);
     std::string getName() { return "Zombie"; };
};

#endif