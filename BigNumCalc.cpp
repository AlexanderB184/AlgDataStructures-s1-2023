#include "BigNumCalc.h"

std::list<int> bigNumCalc::buildBigNum(std::string numString) {
  std::list<int> digit_list;
  for (int i = 0; i < numString.length(); i++) {
    int digit = numString[i] - '0';
    digit_list.push_back(digit);
  }
  while (digit_list.front() == 0 && digit_list.size() > 1) {
    digit_list.pop_front();
  }
  return digit_list;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
  int size_dif = num1.size() - num2.size();
  if (size_dif > 0) {
    for (int i = 0; i < size_dif; i++) {
      num2.push_front(0);
    }
  } else {
    for (int i = 0; i < -size_dif; i++) {
      num1.push_front(0);
    }
  }
  std::list<int>::iterator it1 = num1.end();
  std::list<int>::iterator it2 = num2.end();
  std::list<int> num3;
  int carry = 0;
  for (size_t i = 0; i < num1.size(); i++) {
    advance(it1, -1);
    advance(it2, -1);
    int sum = (*it1 + *it2 + carry) % 10;
    carry = (*it1 + *it2 + carry) / 10;
    num3.push_front(sum);
  }
  while (carry > 0) {
    num3.push_front(carry%10);
    carry = carry / 10;
  }
  while (num3.front() == 0 && num3.size() > 1) {
    num3.pop_front();
  }

  return num3;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
  int size_dif = num1.size() - num2.size();
  if (size_dif > 0) {
    for (int i = 0; i < size_dif; i++) {
      num2.push_front(0);
    }
  }
  std::list<int>::iterator it1 = num1.end();
  std::list<int>::iterator it2 = num2.end();
  std::list<int> num3;
  int borrow = 0;
  for (size_t i = 0; i < num1.size(); i++) {
    advance(it1, -1);
    advance(it2, -1);
    int sum = (*it1 - *it2 - borrow);
    borrow = 0;
    while (sum < 0) {
      sum += 10;
      borrow += 1;
    }
    // borrow = (*it1 - *it2 - borrow) / 10;
    num3.push_front(sum);
  }
  while (num3.front() == 0 && num3.size() > 1) {
    num3.pop_front();
  }

  return num3;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
  
  std::list<int>::iterator it2 = num2.end();
  std::list<int> num3;
  std::list<int> num4;
  for (size_t k = 0; k < num1.size() + num2.size(); k++) num3.push_back(0);
  int pow = 1;
  for (size_t j = 0; j < num2.size(); j++) {
    std::list<int>::iterator it1 = num1.end();
    advance(it2, -1);
    num4.clear();
    int carry = 0;
    for (size_t i = 0; i < num1.size(); i++) {
      advance(it1, -1);
      int sum = ((*it1 * (*it2*pow)) + carry) % 10;
      carry = ((*it1 * (*it2*pow)) + carry) / 10;
      num4.push_front(sum);
    }
    num4.push_front(carry);
    num3 = add(num3, num4);
    pow*=10;
  }
  while (num3.front() == 0 && num3.size() > 1) {
    num3.pop_front();
  }

  return num3;
}