#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Player.h"
#include "Referee.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

using namespace std;

int main(void) {
  Human* you = new Human("Ash");
  Human* opponent = new Human("Slobian");
  Referee* ref = new Referee();
  Player* winner = ref->refGame(you, opponent);
  if (winner == nullptr) {
    cout << "Draw" << endl;
  } else {
    cout << winner->getName() << endl;
  }
  return 0;
}