#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  static std::map<int, int> nCrate;
  std::map<int, int>::iterator it = nCrate.begin();
  nCrate.find(numCrates);
  if (it != nCrate.end()) {
    nCrate.erase(it);
    if (numCrates == 0) {
      nCrate[0] = 0;
      return 0;
    }
    if (numCrates <= loadSize) {
      nCrate[numCrates] = 1;
      return 1;
    }
    int halfCrates = numCrates >> 1;
    int otherHalfCrates = numCrates - halfCrates;
    int output =
        numTrucks(halfCrates, loadSize) + numTrucks(otherHalfCrates, loadSize);
    nCrate[numCrates] = output;
    return output;
  }
  return nCrate[numCrates];
}