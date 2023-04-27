#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

class LinkedList {
  friend class Node;
 public:
  LinkedList();
  LinkedList(int* array, int len);
  ~LinkedList();
  void insertPosition(int pos, int newNum);
  bool deletePosition(int pos);
  int get(int pos);
  int search(int target);
  void printList();

 private:
  Node* head;
};

#endif