#ifndef SCISSORS
#define SCISSORS

#include <string>

#include "Move.h"

class Scissors : public Move {
 public:
  bool beats(Move *);
  std::string getName() { return "Scissors"; };
};

#endif