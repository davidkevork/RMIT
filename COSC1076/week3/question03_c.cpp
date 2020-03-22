#include <iostream>
#include <string>

bool getCharacter(char* c);

int main(void) {
  char characters[101];

  getCharacter(characters);

  std::cout << "Output: " << characters << std::endl;
  return 0;
}

bool getCharacter(char* c) {
  if (std::cin.good()) {
    std::cout << "Enter upto 100 characters: ";
    std::cin >> c;
    c[100] = '\0';
    return true;
  } else {
    return false;
  }
}
