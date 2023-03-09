#include "Scissors.h"

bool Scissors::beats( Move * moveToBeat) {
    if (moveToBeat->getType() == "Paper") {
      return true;
    }
    return false;
}