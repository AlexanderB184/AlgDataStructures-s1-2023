#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  static std::map<int, int> truckMap;
  std::map<int, int>::iterator it = truckMap.begin();
  truckMap.find(numCrates);
  if (it != truckMap.end()) {
    truckMap.erase(it);
    if (numCrates == 0) {
      truckMap[0] = 0;
      return 0;
    }
    if (numCrates <= loadSize) {
      truckMap[numCrates] = 1;
      return 1;
    }
    int halfCrates = numCrates >> 1;
    int otherHalfCrates = numCrates - halfCrates;
    int output =
        numTrucks(halfCrates, loadSize) + numTrucks(otherHalfCrates, loadSize);
    truckMap[numCrates] = output;
    return output;
  }
  return truckMap[numCrates];
}