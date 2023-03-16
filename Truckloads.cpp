#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates == 0) {
      return 0;
    }
    if (numCrates <= loadSize) {
      return 1;
    }

    int halfCrates = numCrates >> 1;
    int otherHalfCrates = numCrates - halfCrates;
    return numTrucks(halfCrates, loadSize) + numTrucks(otherHalfCrates, loadSize);
};