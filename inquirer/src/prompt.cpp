#include <iostream>
#include "prompt.hpp"
#include "color.h"

prompt::~prompt() {}

void prompt::ask() {
  std::cout << GREEN << "? " << RESET << question << "? " << DIM << "(" << default_ << ") " << RESET;
  std::getline(std::cin, answer);
}