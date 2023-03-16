#include "Reverser.h"

#include <cmath>
#include <string>
using namespace std;

int Reverser::reverseDigit(int value) {
  if (value < 0) {
    return -1;
  }
  int length = floor(log(value) / log(10));
  if (length < 1) {
    return value;
  }
  int lastDigit = value % 10;
  int firstDigit = floor(value / pow(10,length));
  return firstDigit + lastDigit * (int)pow(10,length) +
         10 * reverseDigit((value % (int)pow(10,length)) / 10);
}

string Reverser::reverseString(string word) {
  if (word.length() < 2) {
    return word;
  }
  return word[word.length() - 1] +
         reverseString(word.substr(1, word.length() - 2)) + word[0];
}