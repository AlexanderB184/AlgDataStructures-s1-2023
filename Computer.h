#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

class Computer : public Player {
    public:
  Computer() { name = "Computer"; };
  char makeMove();
};

#endif