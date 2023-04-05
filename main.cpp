#include <iostream>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main(void) {
  std::vector<int> list;
  list.push_back(5);
  list.push_back(2);
  list.push_back(3);
  list.push_back(2);
  list.push_back(5);
  list.push_back(9);
  list.push_back(7);
  list.push_back(1);
   list.push_back(3);
  list.push_back(6);
  list.push_back(8);
  list.push_back(9);
  list.push_back(1);
  list.push_back(2);
  list.push_back(4);
  list.push_back(16);

  QuickSort B;
  list = B.sort(list);
  RecursiveBinarySearch R;
  bool found = R.search(list, 1);

  std::cout << std::endl << found;
  for (size_t i = 0; i < list.size(); i++) std::cout << " " << list.at(i);
  std::cout << std::endl;

  return 0;
}