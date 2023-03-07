#include "set.h"
#include <vector>

using namespace std;

template <class T>
bool Set<T>::isMember(T checkMember) {
  for (size_t i = 0; i < members.size(); i++) {
    if (members.at(i) == checkMember) {
      return true;
    }
  }
  return false;
}