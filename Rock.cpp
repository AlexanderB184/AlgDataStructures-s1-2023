#include "Rock.h"

#include <iostream>

bool Rock::beats( Move * moveToBeat) {
  if (moveToBeat->getType() == "Scissors") {
    return true;
  }
    return false;
}