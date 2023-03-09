#include "Monkey.h"

#include <string>

bool Monkey::beats( Move * moveToBeat) {
  std::string moveToBeatType = moveToBeat->getType();
    return moveToBeatType == "Ninja" || moveToBeatType == "Robot";
}