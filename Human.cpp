#include "Human.h"

#include "MoveConstructor.h"

#include <iostream>


using namespace std;

Human::Human() { name = "Human"; }

Human::Human(string _name) { name = _name; }

Move* Human::makeMove() {
  std::string move;
  cout << "Choose a move:" << endl;
  // ask for move
  cin >> move;
  return MoveConstructor::stringToMove(move);
}