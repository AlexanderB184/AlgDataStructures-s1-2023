#include "Referee.h"
#include "Player.h"

Player* Referee::refGame(Player* player1, Player* player2) {
  char player1choice = player1->makeMove();
  char player2choice = player2->makeMove();
  int shift;

  switch (player1choice) {
    case 'R':
      switch (player2choice) {
        case 'R':
          return nullptr;
          break;
        case 'P':
          return player2;
          break;
        case 'S':
          return player1;
          break;
      }
      break;
    case 'P':
      switch (player2choice) {
        case 'R':
          return player1;
          break;
        case 'P':
          return nullptr;
          break;
        case 'S':
          return player2;
          break;
      }
      break;
    case 'S':
      switch (player2choice) {
        case 'R':
          return player2;
          break;
        case 'P':
          return player1;
          break;
        case 'S':
          return nullptr;
          break;
      }
      break;
  }
}