#include <iostream>

void doubleArray(int* values, int length);

int main() {
  int length = 10;
  int values[length];
  for (int i = 0; i < length; i++) {
    values[i] = i;
  }
  doubleArray(values, length);
  for (int i = 0; i < length; i++) {
    std::cout << "values[" << i << "]: " << values[i] << std::endl;
  }
}

void doubleArray(int* values, int length) {
  for (int i = 0; i < length; i++) {
    values[i] *= 2;
  }
}
