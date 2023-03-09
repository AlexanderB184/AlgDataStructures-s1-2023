#include "Referee.h"

#include "Player.h"
#include "Computer.h"
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

int main(void) { 
    Human* you = new Human();
    Computer* opponent = new Computer();
    Referee* ref = new Referee();
    Player * winner = ref->refGame(you, opponent);
    if (winner == nullptr) {
      cout << "Draw" << endl;
    }
    else {
        cout << winner->getName() << endl;
    }
    return 0;
}