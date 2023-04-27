#include <iostream>
using namespace std;
#include "LinkedList.h"

int main(void) {
  int n = 16;
  int* array = new int[n];
  for (int i = 0; i < n; i++) {
    array[i] = i;
  }
  LinkedList * list = new LinkedList(array, n);
  //list->insertPosition(1, -10);
  //list->insertPosition(57, 16);
  //list->insertPosition(2, 50);
  cout << list->get(1) <<endl;
  cout << list->get(6)<<endl;
  cout << list->get(18)<<endl;
  cout << list->search(0)<<endl;
  cout << list->search(5)<<endl;
  cout << list->search(20)<<endl;
  list->printList();
  delete list;
  return 0;
}