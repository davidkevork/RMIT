#include <iostream>

int main(void) {
  char input;

  if (std::cin.good()) {
    std::cout << "Enter a single character" << std::endl;
    std::cin >> input;
    std::cout << "Output: " << input << std::endl;
  }

  return 0;
}
