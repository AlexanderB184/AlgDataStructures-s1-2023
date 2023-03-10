#include "Robot.h"

#include <string>

bool Robot::beats(Move* moveToBeat) {
  std::string moveToBeatType = moveToBeat->getName();
  return moveToBeatType == "Ninja" || moveToBeatType == "Zombie";
}