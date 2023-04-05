#ifndef RECURSIVE_BINARY_SEARCH
#define RECURSIVE_BINARY_SEARCH

#include <vector>

class RecursiveBinarySearch {
 public:
  bool search(std::vector<int>, int);

 private:
  bool search_helper(std::vector<int>, int, int, int);
};

#endif