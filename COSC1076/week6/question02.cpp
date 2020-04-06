#include <iostream>
#include <fstream>

int main() {
  std::ifstream inFile("snowyRiver.txt");

  int length = 0;
  if (inFile.good()) {
    while (!inFile.eof()) {
      std::string line;
      std::getline(inFile, line);
      length += 1;
    }
  }
  std::cout << "Lines: " << length << std::endl;
}
