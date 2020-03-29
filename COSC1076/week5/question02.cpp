#include <iostream>

int stringLength(char* string) {
  int length = 0;
  char lastChar = string[0];
  while (lastChar != '\0') {
    length += 1;
    lastChar = string[length];
  }
  return length;
}

int main() {
  char string[20] = "hello world";
  std::cout << string << std::endl;
  std::cout << stringLength(string) << std::endl;
}
