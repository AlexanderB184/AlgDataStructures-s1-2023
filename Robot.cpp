#include "Robot.h"

#include <string>

bool Robot::beats( Move * moveToBeat) {
  std::string moveToBeatType = moveToBeat->getType();
    return moveToBeatType == "Ninja" || moveToBeatType == "Zombie";
}