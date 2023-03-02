#include "Human.h"

#include <iostream>
#include <string>

char Human::makeMove() {
  std::string choice;
  bool isValid = false;
  while (!isValid) {
    std::cout << "Choose one of (R)ock, (P)aper or (S)cissors" << std::endl;
      std::cin >> choice;
      if (choice == "R" || choice == "P" || choice == "S") {
        isValid = true;
        return choice[0];
      }
      std::cout << "That is not a valid option" << std::endl;
  }
  return "E";
};