#include <iostream>
#include "LinkedList.h"
LinkedList::LinkedList() {
head = nullptr;
}
LinkedList::~LinkedList() {
while (head != nullptr) {
deleteFront();
}
}
void LinkedList::insertFront(int item) {
Node* newNode = new Node(item, head);
head = newNode;
}
void LinkedList::deleteFront() {
if(head != nullptr) {
Node* oldHead = head;
head = head->link;
delete oldHead;
}
}
void LinkedList::printList() {
Node* currNode = head;
while(currNode != nullptr) {
std::cout << currNode->data << " ";
currNode = currNode->link;
}
}
/////////// your code goes here... DO NOT change the function signatures ///////////
bool LinkedList::swap(int pos1, int pos2) {
    Node* curr = head;
    int i = 0;
    Node* node1 = nullptr;
    Node* pre1 = nullptr;
    Node* node2 = nullptr;
    Node* pre2 = nullptr;
    while (curr != nullptr) {
        if (i == pos1) node1 = curr;
        if (i+1 == pos1) pre1 = curr;
        if (i == pos2) node2 = curr;
        if (i+1 == pos2) pre2 = curr;
        curr = curr->link;
        i++;
    }
    if (node1 == nullptr || node2 == nullptr) return false;
    if (pre1 != nullptr) {
        pre1->link = node2;
    }
    else {
        head = node2;
    }
    if (pre2 != nullptr) {
        pre2->link = node1;
    }
    else {
        head = node1;
    }
    Node* temp = node1->link;
    node1->link = node2->link;
    node2->link = temp;
    return true;
}
bool LinkedList::find_and_delete(int target) {
    Node* curr = head;
    Node* pre = nullptr;
    while (curr != nullptr) {
        if (curr->data == target) {
            if (pre == nullptr) {
                head =curr->link;
                
            }
            else {
                pre->link = curr->link;
            }
            delete curr;
            return true;
        }
        pre = curr;
        curr = curr->link;

    }
    return false;
}