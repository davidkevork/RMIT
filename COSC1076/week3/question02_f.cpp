#include <iostream>

void modifyDouble(double* z);

int main (void) {
  int x = 1;
  int* xPtr = &x;

  x = 5;
  *xPtr = 77;

  double y = 6;
  modifyDouble(&y);

  return 0;
}

void modifyDouble(double* z) {
  *z = *z * 2;
}
