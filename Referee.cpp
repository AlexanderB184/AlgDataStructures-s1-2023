#include "Referee.h"
#include "Player.h"
#include "Move.h"

#include <string>


Player * Referee::refGame(Player * Player1, Player * Player2) {
  //Make the moves
  Move * Player1Move = Player1->makeMove();
  Move* Player2Move = Player2->makeMove();
  // Player 1 wins
  if (Player1Move->beats(Player2Move)) {
    return Player1;
  }
  // Player 2 wins
  else if (Player2Move->beats(Player1Move)) {
    return Player2;
  }
  //Neither player beats the other
  return nullptr;
}