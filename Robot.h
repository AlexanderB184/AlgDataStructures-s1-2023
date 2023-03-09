#ifndef ROBOT
#define ROBOT

#include "Move.h"
#include <string>

class Robot : public Move {
    public:
     bool beats(Move *);
     std::string getType() { return "Robot"; };
};

#endif