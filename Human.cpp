#include "Human.h"

#include <iostream>

#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

using namespace std;

Human::Human() { name = "Human"; }

Human::Human(string _name) { name = _name; }

Move* Human::makeMove() {
  bool isValidMove = false;
  std::string move;
  cout << "Choose a move:" << endl;
  // ask for move
  cin >> move;
  // validate move
  if (move == "Rock") {
    return new Rock();
  } else if (move == "Paper") {
    return new Paper();
  } else if (move == "Scissors") {
    return new Scissors();
  } else if (move == "Monkey") {
    return new Monkey();
  } else if (move == "Ninja") {
    return new Ninja();
  } else if (move == "Pirate") {
    return new Pirate();
  } else if (move == "Robot") {
    return new Robot();
  } else if (move == "Zombie") {
    return new Zombie();
  } else {
    return nullptr;
  }
}