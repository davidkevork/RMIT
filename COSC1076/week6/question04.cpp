#include <iostream>
#include <fstream>

int countLines(std::string filename);
int countCharacters(std::string filename);

int main() {
  std::cout << "Length: " << countLines("snowyRiver.txt") << std::endl;
  std::cout << "Characters: " << countCharacters("snowyRiver.txt") << std::endl;
}

int countLines(std::string filename) {
  std::ifstream inFile(filename.c_str());
  int length = 0;
  if (inFile.good()) {
    while (!inFile.eof()) {
      std::string line;
      std::getline(inFile, line);
      length += 1;
    }
  }
  return length;
}

int countCharacters(std::string filename) {
  std::ifstream inFile(filename.c_str());
  int length = 0;
  if (inFile.good()) {
    while (!inFile.eof()) {
      std::string line;
      std::getline(inFile, line);
      length += line.length();
    }
  }
  return length;
}
