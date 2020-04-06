#include <iostream>
#include <fstream>

int main() {
  std::ifstream inFile("snowyRiver.txt");

  if (inFile.good()) {
    while (!inFile.eof()) {
      std::string line;
      std::getline(inFile, line);
      std::cout << line << std::endl;
    }
  }
}
