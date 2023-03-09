#include "Pirate.h"

#include <string>

bool Pirate::beats( Move * moveToBeat) {
  std::string moveToBeatType = moveToBeat->getName();
    return moveToBeatType == " Monkey" || moveToBeatType == "Robot";
}