#include "Monkey.h"

#include <string>

bool Monkey::beats( Move * moveToBeat) {
  std::string moveToBeatType = moveToBeat->getName();
    return moveToBeatType == "Ninja" || moveToBeatType == "Robot";
}