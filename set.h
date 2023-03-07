#ifndef SET_H
#define SET_H

#include <vector>

template <class T> 
class Set {
    private:
     std::vector<T> members;

    public:
     bool is_member(T member);
     void add(T member);
     void remove(T member);
};

#endif