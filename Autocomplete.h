#ifndef AUTO_COMPLETE_H
#define AUTO_COMPLETE_H

#include <string>
#include <vector>

#include "Node.h"

class Autocomplete {
 public:
  std::vector<std::string> getSuggestions(std::string partialWord);
  void insert(std::string word);
  ~Autocomplete();
  Autocomplete();

 private:
  Node* root;
  std::vector<std::string> vectorize(std::string pastString, Node* subTrie);
};

#endif