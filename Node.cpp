#include "Node.h"

Node::~Node() {
  for (int i = 0; i < n_links; i++) {
    if (links[i] != nullptr) {
      delete links[i];
    }
  }
}

Node::Node(bool b, int n) {
  is_word = b;
  n_links = n;
  links = new Node*[n];
}