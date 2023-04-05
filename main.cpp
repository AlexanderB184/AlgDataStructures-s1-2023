#include <iostream>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main(void) {
  std::vector<int> list;
  int num;
  while (std::cin >> num){
    list.push_back(num);
  }

  QuickSort B;
  list = B.sort(list);
  RecursiveBinarySearch R;
  bool found = R.search(list, 1);

  std::cout << std::endl << found;
  for (size_t i = 0; i < list.size(); i++) std::cout << " " << list.at(i);
  std::cout << std::endl;

  return 0;
}