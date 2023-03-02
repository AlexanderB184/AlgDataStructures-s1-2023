#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human : public Player {
  Human() { name = "Human"; };
  char makeMove();
};

#endif