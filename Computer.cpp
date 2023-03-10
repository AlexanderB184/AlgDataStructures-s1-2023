#include "Computer.h"

#include <string>

#include "Move.h"
#include "Rock.h"

Move* Computer::makeMove() { return new Rock(); }

Computer::Computer() { name = "Computer"; }