#include <iostream>

void copyString(char* src, char* dest) {
  int length = 0;
  char lastChar = src[0];
  dest[0] = src[0];
  while (lastChar != '\0') {
    length += 1;
    lastChar = src[length];
    dest[length] = src[length];
  }
}

int main() {
  char src[20] = "hello world";
  char dest[20] = "";

  std::cout << "src: " << src << std::endl;
  std::cout << "dest: " << dest << std::endl;

  copyString(src, dest);

  std::cout << "src: " << src << std::endl;
  std::cout << "dest: " << dest << std::endl;
}
