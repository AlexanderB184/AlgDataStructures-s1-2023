#include "Ninja.h"

#include <string>

bool Ninja::beats( Move * moveToBeat) {
  std::string moveToBeatType = moveToBeat->getType();
    return moveToBeatType == "Pirate" || moveToBeatType == "Zombie";
}