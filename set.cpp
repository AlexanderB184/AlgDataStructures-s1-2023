#include "set.h"

template <class T>
bool Set<T>::is_member(T checkMember){
    //see if it is in the members vector
    //does vector already have this function? Not directly
    for (size_t i = 0; i < members.size(); i++) {
        if (members.at(i) == checkMember) {
          return true;
        }
    }
    return false;
}

template <class T>
void Set<T>::add(T newMember){
    //check if already a member
    //if not add it
    if (!this->is_member(newMember)) {
      members.push_back(newMember);
    }
}

template <class T>
void Set<T>::remove(T deleteMember){
    //does vector already have this
    if (is_member(deleteMember)) {
        for (size_t i = 0; i < members.size(); i++) {
        if (members.at(i) == deleteMember) {
          //members.erase(i);
        }
    }
    }
}