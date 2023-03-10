#ifndef PAPER
#define PAPER

#include <string>

#include "Move.h"

class Paper : public Move {
 public:
  bool beats(Move *);
  std::string getName() { return "Paper"; };
};

#endif