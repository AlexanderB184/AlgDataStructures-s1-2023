#ifndef SET
#define SET

#include <vector>

template <class T>
class Set {
    private:
     std::vector<T> members;

    public:
     Set() {};
     void add(T);
     void remove(T);
     bool isMember(T);
};

#endif