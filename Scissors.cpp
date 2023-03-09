#include "Scissors.h"

bool Scissors::beats( Move * moveToBeat) {
    if (moveToBeat->getName() == "Paper") {
      return true;
    }
    return false;
}