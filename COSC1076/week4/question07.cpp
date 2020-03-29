#include <iostream>
#include <string>
#include "Card.h"

#define NUMBER_CARDS_TO_READ 5

void readCard(int* colour, int* number) {
   if (std::cin.good()) {
      std::cout << "Enter colour (as number): ";
      std::cin >> *colour;
   } else {
      *colour = 0;
   }

   if (std::cin.good()) {
      std::cout << "Enter number: ";
      std::cin >> *number;
   } else {
      *number = 0;
   }
}

void printCard(Card* card) {
  std::cout << "Number: " << card->getNumber() << std::endl;
  std::cout << "Colour (int): " << card->getColourAsInt() << std::endl;
  std::cout << "Colour (string): " << card->getColourAsString() << std::endl;
  std::cout << "Rule: " << card->getRule() << std::endl;
}

int main(void) {
  Card* hand[NUMBER_CARDS_TO_READ] = {};
   for (int i = 0; i != NUMBER_CARDS_TO_READ; ++i) {
      hand[i] = nullptr;
   }
   for (int i = 0; i != NUMBER_CARDS_TO_READ; ++i) {
      int colour;
      int number;

      readCard(&colour, &number);
      Card* card = new Card(colour, number);
      hand[i] = card;
      printCard(hand[i]);
   }

  return EXIT_SUCCESS;
}
