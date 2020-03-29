#include <iostream>
#include "Hand.h"

int main() {
  return 0;
}

Hand::Hand() {
  this->numStored = 0;
  for (size_t i = 0; i < MAX_CARDS; i++) {
    this->cards[i] = nullptr;
  }
}
Hand::~Hand() {
  for (size_t i = 0; i < MAX_CARDS; i++) {
    if (this->cards[i] != nullptr) {
      delete this->cards[i];
    }
  }
}

void Hand::addCard(Card* card) {
  if (this->numStored < MAX_CARDS) {
    this->cards[numStored] = card;
    this->numStored += 1;
  }
}

int Hand::getNumCards() {
  return this->numStored;
}

Card* Hand::getCard(int index) {
  return this->cards[index];
}
