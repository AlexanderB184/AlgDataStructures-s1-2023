#include "Paper.h"

bool Paper::beats( Move * moveToBeat) {
    if (moveToBeat->getName() == "Rock") {
      return true;
    }
    return false;
}