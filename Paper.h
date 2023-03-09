#ifndef PAPER
#define PAPER

#include "Move.h"
#include <string>

class Paper : public Move {
    public:
     bool beats(Move *);
     std::string getType() { return "Paper"; };
};

#endif