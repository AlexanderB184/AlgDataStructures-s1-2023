#include "Computer.h"
#include "Move.h"
#include "Rock.h"

#include <string>

Move* Computer::makeMove() {
  return new Rock();
}

Computer::Computer() { name = "Computer"; }