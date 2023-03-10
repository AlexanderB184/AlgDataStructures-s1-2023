#ifndef MOVECON
#define MOVECON
#include <string>

#include "Move.h"

class MoveConstructor {
 public:
  static Move* stringToMove(std::string);
};

#endif