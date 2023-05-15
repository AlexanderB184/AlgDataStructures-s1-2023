#include "PrefixMatcher.h"

#include <iostream>

RouterNode::RouterNode(int r) { routerNumber = r; }
RouterNode::~RouterNode() {
  delete links[0];
  delete links[1];
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
  RouterNode* curr = root;
  for (int i = 0; i < address.length(); i++) {
    if (curr->links[address[i] - '0'] == nullptr) {
      curr->links[address[i] - '0'] = new RouterNode(-1);
    }
    curr = curr->links[address[i] - '0'];
  }
  curr->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
  RouterNode* curr = root;
  int last_router = -1;
  int i = 0;
  while (curr != nullptr && i < networkAddress.length()) {
    if (curr->routerNumber != -1) last_router = curr->routerNumber;
    curr = curr->links[networkAddress[i] - '0'];
    i++;
  }
  return last_router;
}

PrefixMatcher::~PrefixMatcher() { delete root; }
PrefixMatcher::PrefixMatcher() { root = new RouterNode(-1); }