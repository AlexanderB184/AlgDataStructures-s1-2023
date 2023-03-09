#ifndef MONKEY
#define MONKEY

#include "Move.h"
#include <string>

class Monkey : public Move {
    public:
     bool beats(Move *);
     std::string getType() { return "Monkey"; };
};

#endif