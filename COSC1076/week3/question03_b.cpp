#include <iostream>

bool getCharacter(char* c);

int main(void) {
  char input;

  getCharacter(&input);

  std::cout << "Output: " << input << std::endl;
  return 0;
}

bool getCharacter(char* c) {
  if (std::cin.good()) {
    std::cout << "Enter a single character: ";
    std::cin >> *c;
    return true;
  } else {
    return false;
  }
}
