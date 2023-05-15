#include "Autocomplete.h"
#include <iostream>

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
  Node* curr = root;
  std::vector<std::string> subTrie;
  for (size_t i = 0; i < partialWord.length(); i++) {
    if (curr->links[partialWord[i] - 'a'] == nullptr) {
      return subTrie;
    }
    curr = curr->links[partialWord[i] - 'a'];
  }
  return vectorize(partialWord, curr);
}

void Autocomplete::insert(std::string word) {
  Node* curr = root;
  for (size_t i = 0; i < word.length(); i++) {
    if (curr->links[word[i] - 'a'] == nullptr) {
      curr->links[word[i] - 'a'] = new Node(false, 26);
    }
    curr = curr->links[word[i] - 'a'];
  }
  curr->is_word = true;
}

std::vector<std::string> Autocomplete::vectorize(std::string pastString,
                                                 Node* subTrie) {
  std::vector<std::string> output;
  if (subTrie->is_word) {
    output.push_back(pastString);
  }
  for (int j = 0; j < 26; j++) {
    char letter = 'a' + j;
    if (subTrie->links[j] == nullptr) {
      continue;
    }
    std::vector<std::string> v =
        vectorize(pastString + letter, subTrie->links[j]);
    output.insert(output.end(), v.begin(), v.end());
  }
  return output;
}

Autocomplete::~Autocomplete() { delete root; }
Autocomplete::Autocomplete() { root = new Node(false, 26); }