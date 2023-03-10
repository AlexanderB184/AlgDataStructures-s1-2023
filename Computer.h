#ifndef COMP
#define COMP

#include "Player.h"

class Computer : public Player {
 public:
  Computer();
  Move* makeMove();
};

#endif