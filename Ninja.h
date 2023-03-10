#ifndef NINJA
#define NINJA

#include <string>

#include "Move.h"

class Ninja : public Move {
 public:
  bool beats(Move *);
  std::string getName() { return "Ninja"; };
};

#endif