#ifndef PREFIX_MATCHER_H
#define PREFIX_MATCHER_H
#include <string>
#include <vector>

class RouterNode {
  friend class PrefixMatcher;
  private:
     int routerNumber;
     RouterNode* links[2];

    public:
     RouterNode(int);
     ~RouterNode();
};

class PrefixMatcher {
 public:
  int selectRouter(std::string networkAddress);
  void insert(std::string address, int routerNumber);
  ~PrefixMatcher();
  PrefixMatcher();

 private:
  RouterNode* root;
  std::vector<std::string> vectorize(std::string pastString, RouterNode* subTrie);
};

#endif
