#ifndef ROBOT
#define ROBOT

#include <string>

#include "Move.h"

class Robot : public Move {
 public:
  bool beats(Move *);
  std::string getName() { return "Robot"; };
};

#endif