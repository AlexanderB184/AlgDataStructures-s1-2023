#include "BubbleSort.h"

void BubbleSort::swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

std::vector<int> BubbleSort::sort(std::vector<int> list) {
  int n = list.size();
  bool sorted;
  for (int i = 0; i < n; i++) {
    sorted = true;
    for (int j = 0; j < n - i - 1; j++) {
      if (list.at(j) > list.at(j + 1)) {
        int temp = list.at(j);
        list.at(j) = list.at(j+1);
        list.at(j+1) = temp;
        sorted = false;
      }
    }
    if (sorted) {
      return list;
    }
  }
  return list;
}