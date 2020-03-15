#include <iostream>

void addOne(double *x);

int main(void) {
  double x = 5;
  addOne(&x);
  std::cout << x << std::endl;
}

void addOne(double *x) {
  (*x)++;
}
