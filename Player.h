#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    public:
  virtual char makeMove() = 0;
  std::string name;
  std::string getName() { return name; };
};

#endif