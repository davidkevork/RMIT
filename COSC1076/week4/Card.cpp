#include <iostream>
#include <string>
#include "Card.h"

Card::Card(int colour, int number) :
   colour(colour),
   number(number)
{
   this->colour = colour;
   this->number = number;
}

int Card::getNumber() {
   return number;
}

int Card::getColourAsInt() {
   return colour;
}

std::string Card::getColourAsString() {
   std::string red = "Red";
   std::string orange = "Orange";
   std::string yellow = "Yellow";
   std::string green = "Green";
   std::string blue = "Blue";
   std::string indigo = "Ingido";
   std::string violet = "Violet";
   std::string unknown = "UNKNOWN";

   std::string cardStr = unknown;
   if (colour == RED) {
      cardStr = red;
   } else if (colour == ORANGE) {
      cardStr = orange;
   } else if (colour == YELLOW) {
      cardStr = yellow;
   } else if (colour == GREEN) {
      cardStr = green;
   } else if (colour == BLUE) {
      cardStr = blue;
   } else if (colour == INDIGO) {
      cardStr = indigo;
   } else if (colour == VIOLET) {
      cardStr = violet;
   }

   return cardStr;
}

std::string Card::getRule() {
   std::string red = "Highest Card Wins";
   std::string orange = "Most of One Number Wins";
   std::string yellow = "Most of One Color Wins";
   std::string green = "Most Even Cards Win";
   std::string blue = "Most Different Colors Wins";
   std::string indigo = "Most Cards In a Row Wins";
   std::string violet = "Most Cards Below 4 Wins";
   std::string unknown = "UNKNOWN";

   std::string cardStr = unknown;
   if (colour == RED) {
      cardStr = red;
   } else if (colour == ORANGE) {
      cardStr = orange;
   } else if (colour == YELLOW) {
      cardStr = yellow;
   } else if (colour == GREEN) {
      cardStr = green;
   } else if (colour == BLUE) {
      cardStr = blue;
   } else if (colour == INDIGO) {
      cardStr = indigo;
   } else if (colour == VIOLET) {
      cardStr = violet;
   }

   return cardStr;
}
