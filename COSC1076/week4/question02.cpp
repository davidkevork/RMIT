#include <iostream>

typedef int Integer;
typedef char character;
typedef std::string string;
typedef double arrayOfDoubles[5];
typedef float* floatPointer;

int main() {
  Integer uselessInteger = 10;
  character uselessCharacter = 'a';
  string uselessString = "useless";
  arrayOfDoubles uselessDoubles = { 1.1, 2.2, 3.3, 4.4, 5.5 };
  float arrayFloat[6] = { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F };
  floatPointer uselessFloats = arrayFloat;

  std::cout << uselessInteger  << std::endl;
  std::cout << uselessCharacter << std::endl;
  std::cout << uselessString << std::endl;
  std::cout << *uselessDoubles << std::endl;
  std::cout << *uselessFloats << std::endl;

  // variables dont need to be cleaned
  // only pointers require to be deleted
  delete uselessDoubles;
  // this will also delete arrayFloat
  delete uselessFloats;

  return 0;
}
