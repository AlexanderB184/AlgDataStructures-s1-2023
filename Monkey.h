#ifndef MONKEY
#define MONKEY

#include <string>

#include "Move.h"

class Monkey : public Move {
 public:
  bool beats(Move *);
  std::string getName() { return "Monkey"; };
};

#endif