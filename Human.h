#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
  Human() {name = "Human"};
  char makeMove();
};

#endif