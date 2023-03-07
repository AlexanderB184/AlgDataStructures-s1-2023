
#include <vector>
#include <iostream>

using namespace std;

template <class T>
class Set {
    private:
     vector<T> members;

    public:
     Set() {};
     void add(T);
     void remove(T);
     bool isMember(T);
};

template <class T>
bool Set<T>::isMember(T checkMember) {
  for (size_t i = 0; i < members.size(); i++) {
    if (members.at(i) == checkMember) {
      return true;
    }
  }
  return false;
}

template <class T>
void Set<T>::add(T newMember) {
  if (!this->isMember(newMember)) {
    members.push_back(newMember);
  }
}

template <class T>
void Set<T>::remove(T deleteMember) {
  if (this->isMember(deleteMember)) {
    for (size_t i = 0; i < members.size(); i++) {
    if (members.at(i) == deleteMember) {
      members.erase(i);
    }
  }
  }
}


int main(void) { 
    Set<int> mySet;
    cout << "Created set" << endl;
    cout << "check if 1 is in set" << endl;
    cout << mySet.isMember(1) << endl;
    cout << "add 1 to set" << endl;
    mySet.add(1);
    cout << "check if 1 is in set" << endl;
    cout << mySet.isMember(1) << endl;
    cout << "add 2 to set" << endl;
    mySet.add(2);
    cout << "check if 2 is in set" << endl;
    cout << mySet.isMember(2) << endl;
    cout << "add 1 to set" << endl;
    mySet.add(1);
    cout << "check if 1 is in set" << endl;
    cout << mySet.isMember(1) << endl;
    cout << "remove 2 from set" << endl;
    mySet.remove(2);
    cout << "check if 2 is in set" << endl;
    cout << mySet.isMember(2) << endl;

    return 1;
}