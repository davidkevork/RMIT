#include <iostream>

int main (void) {
  int x = 1;
  int* xPtr = &x;

  x = 5;
  *xPtr = 77;

  return 0;
}
