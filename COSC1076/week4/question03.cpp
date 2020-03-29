#include <iostream>

typedef int Integer;
typedef char character;
typedef std::string string;
typedef double arrayOfDoubles;
typedef float* floatPointer;

int main() {
  Integer* uselessHeapInteger = new Integer(10);
  character* uselessHeapCharacter = new character('a');
  string* uselessHeapString = new string("useless");
  arrayOfDoubles* uselessHeapDoubles = new arrayOfDoubles[5]{ 1.1, 2.2, 3.3, 4.4, 5.5 };
  float* arrayHeapFloat = new float[6]{ 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F };
  floatPointer uselessHeapFloats = arrayHeapFloat;

  std::cout << *uselessHeapInteger  << std::endl;
  std::cout << *uselessHeapCharacter << std::endl;
  std::cout << *uselessHeapString << std::endl;
  std::cout << *uselessHeapDoubles << std::endl;
  std::cout << *uselessHeapFloats << std::endl;

  delete uselessHeapInteger;
  delete uselessHeapCharacter;
  delete uselessHeapString;
  delete uselessHeapDoubles;
  delete uselessHeapFloats;

  return 0;
}
