#ifndef PLAYER
#define PLAYER

#include "Move.h"

class Player {
 public:
  virtual Move* makeMove() = 0;
  std::string getName();

 protected:
  std::string name;

 private:
};

#endif