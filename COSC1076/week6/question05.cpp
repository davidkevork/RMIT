#include <iostream>
#include <fstream>
#include <string.h>

int countLines(std::string filename);
int countCharacters(std::string filename);

int main(int argc, char** argv) {
  if (!strcmp(argv[1], "-l")) {
    std::cout << "Length: " << countLines(argv[2]) << std::endl;
  } else if (!strcmp(argv[1], "-c")) {
    std::cout << "Characters: " << countCharacters(argv[2]) << std::endl;
  }
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
