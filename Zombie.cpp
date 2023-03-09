#include "Zombie.h"

#include <string>

bool Zombie::beats( Move * moveToBeat) {
  std::string moveToBeatType = moveToBeat->getType();
    return moveToBeatType == "Pirate" || moveToBeatType == "Monkey";
}