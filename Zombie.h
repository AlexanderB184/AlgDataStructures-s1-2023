#ifndef ZOMBIE
#define ZOMBIE

#include <string>

#include "Move.h"

class Zombie : public Move {
 public:
  bool beats(Move *);
  std::string getName() { return "Zombie"; };
};

#endif