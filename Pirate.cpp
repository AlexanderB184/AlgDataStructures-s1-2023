#include "Pirate.h"

#include <string>

bool Pirate::beats( Move * moveToBeat) {
  std::string moveToBeatType = moveToBeat->getType();
    return moveToBeatType == " Monkey" || moveToBeatType == "Robot";
}