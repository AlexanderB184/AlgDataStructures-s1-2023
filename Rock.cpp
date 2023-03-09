#include "Rock.h"

#include <iostream>

bool Rock::beats( Move * moveToBeat) {
  if (moveToBeat->getName() == "Scissors") {
    return true;
  }
    return false;
}