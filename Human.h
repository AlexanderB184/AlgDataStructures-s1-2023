#ifndef HUMAN
#define HUMAN

#include <string>

#include "Player.h"

class Human : public Player {
 public:
  Human();
  Human(std::string);
  Move* makeMove();
};

#endif