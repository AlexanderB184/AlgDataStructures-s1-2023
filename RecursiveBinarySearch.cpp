#include "RecursiveBinarySearch.h"
bool RecursiveBinarySearch::search_helper(std::vector<int> list, int value_to_find, int start, int end) {
  int n = end - start;
  if (n == 0) {
    return false;
  }
  int middle_pos = (start + end) >> 1;
  int middle = list.at(middle_pos);

  if (middle > value_to_find) {
    return search_helper(list, value_to_find, start, middle_pos);
  } else if (middle < value_to_find) {
    return search_helper(list, value_to_find, middle_pos, end);
  } else {
    return true;
  }
  }
bool RecursiveBinarySearch::search(std::vector<int> list, int value_to_find) {
  int n = list.size();
  if (n == 0) {
    return false;
  }
  return search_helper(list, value_to_find, 0, n);
}