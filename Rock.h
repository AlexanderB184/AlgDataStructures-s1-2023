#ifndef ROCK
#define ROCK

#include <string>

#include "Move.h"

class Rock : public Move {
 public:
  bool beats(Move *);
  std::string getName() { return "Rock"; };
};

#endif