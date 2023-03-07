#include "set.h"

#include <iostream>

using namespace std;

int main(void) { 
    Set<int> mySet;
    cout << "Created set" << endl;
    cout << "check if 1 is in set" << endl;
    cout << mySet.is_member(1) << endl;
    
    return 1;
}