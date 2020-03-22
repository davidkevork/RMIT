#include <iostream>

void modifyDouble(double* z);
void modifyDoubleRef(double& a);

int main (void) {
  int x = 1;
  int* xPtr = &x;

  x = 5;
  *xPtr = 77;

  double y = 6;
  modifyDouble(&y);
  modifyDoubleRef(y);

  return 0;
}

void modifyDouble(double* z) {
  *z = *z * 2;
}

void modifyDoubleRef(double& a) {
  a = a * 3;
}
