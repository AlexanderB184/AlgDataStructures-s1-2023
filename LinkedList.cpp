#include "LinkedList.h"

#include <iostream>
#include <limits>
using namespace std;

LinkedList::LinkedList() { head = nullptr; }
LinkedList::LinkedList(int* array, int len) {
  if (len > 0) {
    Node* currentNode = new Node();
    currentNode->data = array[0];
    head = currentNode;
    for (int i = 1; i < len; i++) {
      Node* nextNode = new Node();
      nextNode->data = array[i];
      currentNode->link = nextNode;
      currentNode = nextNode;
    }
  }
}
LinkedList::~LinkedList() {
  Node* currentNode = head;
  while (currentNode != nullptr) {
    Node* nextNode = currentNode->link;
    delete currentNode;
    currentNode = nextNode;
  }
}
void LinkedList::insertPosition(int pos, int newNum) {
  Node* newNode = new Node();
  newNode->data = newNum;
  if (pos <= 1 || head == nullptr) {
    newNode->link = head;
    head = newNode;
    return;
  }
  Node* currentNode = head;
  for (int i = 2; i < pos; i++) {
    if (currentNode->link == nullptr) {
      currentNode->link = newNode;
      return;
    }
    currentNode = currentNode->link;
  }
  Node* temp = currentNode->link;
  currentNode->link = newNode;
  newNode->link = temp;
}
bool LinkedList::deletePosition(int pos) {
  Node* currentNode = head;
  if (pos < 1) {
    return false;
  }
  if (pos == 1) {
    Node* deleteNode = head;
    head = head->link;
    delete deleteNode;
    return true;
  }
  for (int i = 2; i < pos; i++) {
    currentNode = currentNode->link;
    if (currentNode == nullptr) {
      return false;
    }
  }
  Node* nextNode = currentNode->link;
  currentNode->link = nextNode->link;
  delete nextNode;
  return true;
}
int LinkedList::get(int pos) {
  if (pos < 1) {
    return std::numeric_limits<int>::max();
  }
  Node* currentNode = head;
  for (int i = 1; i < pos; i++) {
    currentNode = currentNode->link;
    if (currentNode == nullptr) {
      return std::numeric_limits<int>::max();
    }
  }
  return currentNode->data;
}
int LinkedList::search(int target) {
  Node* currentNode = head;
  int i = 1;
  while (currentNode != nullptr) {
    if (currentNode->data == target) {
      return i;
    }
    currentNode = currentNode->link;
    i++;
  }
  return -1;
}
void LinkedList::printList() {
  Node* currentNode = head;
  cout << "[";
  while (currentNode != nullptr) {
    Node* nextNode = currentNode->link;
    
    cout << currentNode->data;
    if (nextNode->link != nullptr) cout << " ";
    currentNode = nextNode;
  }
  cout << "]" << endl;
}
