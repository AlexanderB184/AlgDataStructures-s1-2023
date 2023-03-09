#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Pirate.h"

#include <iostream>

using namespace std;

Human::Human() { name = "you"; }

Human::Human(string _name) { name = _name; }

Move* Human::makeMove() {
  bool isValidMove = false;
  std::string move;
  cout << "Choose a move, Rock, Paper, Scissors, Monkey, Pirate, Ninja or Robot"
       << endl;
  while (!isValidMove) {
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
      cout << "That is not a valid move" << endl;
      return nullptr;
    }
  }
}