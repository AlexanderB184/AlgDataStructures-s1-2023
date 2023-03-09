#include "Paper.h"

bool Paper::beats( Move * moveToBeat) {
    if (moveToBeat->getType() == "Rock") {
      return true;
    }
    return false;
}