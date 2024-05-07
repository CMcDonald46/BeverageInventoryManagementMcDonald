// These are the input validation functions.
#include <iostream>
#include <string>

int validateInput();
std::string validateString();
int validateInteger();
double validateDouble();

int validateInput() {
  int input;
  std::cin >> input;
  while (std::cin.fail())
}
std::string validateString() {
  std::string input;
  std::cin >> input;
  while (std::cin.fail())
}
int validateInteger() {
  int input;
  std::cin >> input;
  while (std::cin.fail())
}
double validateDouble() {
  double input;
  std::cin >> input;
  while (std::cin.fail())
}
