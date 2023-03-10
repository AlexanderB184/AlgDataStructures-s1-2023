#include "MoveConstructor.h"

#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

Move * MoveConstructor::stringToMove(std::string moveName) {
    if (moveName == "Rock") {
    return new Rock();
  } else if (moveName == "Paper") {
    return new Paper();
  } else if (moveName == "Scissors") {
    return new Scissors();
  } else if (moveName == "Monkey") {
    return new Monkey();
  } else if (moveName == "Ninja") {
    return new Ninja();
  } else if (moveName == "Pirate") {
    return new Pirate();
  } else if (moveName == "Robot") {
    return new Robot();
  } else if (moveName == "Zombie") {
    return new Zombie();
  } else {
    return nullptr;
  }
}