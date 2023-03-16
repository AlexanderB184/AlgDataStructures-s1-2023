#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  static std::map<int, int> nCrate;
  std::map<int, int>::iterator it = nCrate.begin();
  nCrate.find(numCrates);
  if (it != nCrate.end()) {
    nCrate.erase(it);
    if (numCrates == 0) {
      return 0;
    }
    if (numCrates <= loadSize) {
      return 1;
    }
    int halfCrates = numCrates >> 1;
    int otherHalfCrates = numCrates - halfCrates;
    return numTrucks(halfCrates, loadSize) + numTrucks(otherHalfCrates, loadSize);
  }
  return nCrate[numCrates];
}