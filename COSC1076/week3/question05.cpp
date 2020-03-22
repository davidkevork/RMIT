#include <iostream>

void swap(int* a, int* b);

int main (void) {
   int i = 1;
   int j = -2;

   swap (&i, &j);

   std::cout << i << std::endl;
   std::cout << j << std::endl;

   return EXIT_SUCCESS;
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
