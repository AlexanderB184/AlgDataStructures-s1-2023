#ifndef NODE_H
#define NODE_H
#include <vector>
class Node {
  friend class AutoComplete;
  friend class PrefixMatcher;
    private:
     bool is_word;
     Node** links;
     int n_links;

    public:
     Node(bool,int);
     ~Node();
};

#endif