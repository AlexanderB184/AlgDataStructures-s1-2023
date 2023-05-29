#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include <string>
#include <vector>

struct document {
  std::string name;
  int document_id;
  int licence_limit;
  std::vector<int> borrowed_by;
};

class DocumentManager {
 public:
  void addDocument(std::string name, int id,
                   int licence_limit);                  // less frequent
  void addPatron(int patron_id);                        // less frequent
  int search(std::string name);                         // more frequent
  bool borrowDocument(int document_id, int patron_id);  // more frequent
  void returnDocument(int document_id, int patron_id);  // more frequent
 private:
  std::vector<int> patrons;
  std::vector<document> documents;
  document* binary_search(int document_id);
  bool patron_exists(int patron_id);
  /**
  STRUCTURES
  STRUCTURE             || LOOK UP TIME WITH ID || LOOK UP TIME WITH NAME ||INSERTION TIME 
  vector                || n                    || n                      || 1 
  vector  sorted by id  || log(n)               || n                      || n binary
  tree                  || log(n)               || n                      || log(n)
  trie                  || n*k                  || k                      || k
  linked list           || n                    || n                      || 1
  linked list sorted    || n                    || n                      || n
  vector sorted by name || n                    || log(n)                 || n
  Vector sorted by id seems to be the best since look up with id will occur most
  frequently
  */
};

#endif