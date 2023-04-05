#include "QuickSort.h"

#include <iostream>

std::vector<int> QuickSort::sort_helper(std::vector<int> list, int start,
                                        int end) {
  int n = end - start;
  int pivot;
  int temp;
  // base case
  if (n < 3) {
    if (n < 2) {
      return list;
    } else {
      if (list.at(start) > list.at(start + 1)) {
        temp = list.at(start);
        list.at(start) = list.at(start + 1);
        list.at(start + 1) = temp;
      }
      return list;
    }
  } else {
    // choose the pivot
    pivot = list.at(start + 2);
  }
  int i = start;
  int j = start;
  int k = end;
  int m = 0;
  bool all_same = true;
  while (m < n) {
    if (list.at(i) < pivot) {
      temp = list.at(i);
      list.at(i) = list.at(j);
      list.at(j) = temp;
      j++;
      i++;
      all_same = false;
    } else if (list.at(i) > pivot) {
      temp = list.at(i);
      list.at(i) = list.at(k - 1);
      list.at(k - 1) = temp;
      k--;
      all_same = false;
    } else {
      i++;
    }
    m++;
  }
  if (all_same) {
    return list;
  }
  std::vector<int> left_list = QuickSort::sort_helper(list, start, j);
  for (int i = start; i < j; i++) list.at(i) = left_list.at(i);
  std::vector<int> right_list = QuickSort::sort_helper(list, k, end);
  for (int i = k; i < end; i++) list.at(i) = right_list.at(i);

  return list;
}

std::vector<int> QuickSort::sort(std::vector<int> list) {
  int n = list.size();
  return QuickSort::sort_helper(list, 0, n);
}
