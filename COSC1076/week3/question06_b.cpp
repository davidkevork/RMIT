
#include <iostream>

#define ROWS   4
#define COLS   5

void readMaze(char maze[ROWS][COLS]);

int main (void) {
   char maze[ROWS][COLS] = {};

   readMaze(maze);
   std::cout << maze[0][0] << std::endl;

   return EXIT_SUCCESS;
}

void findCharacters(char maze[ROWS][COLS], char findChar) {
   for (size_t i = 0; i < ROWS; i++) {
      for (size_t j = 0; j < COLS; j++) {
         if (maze[i][j] == findChar) {
            std::cout << "String (" << findChar << ") is at location: (x: " << i << ", y: " << j << ")"; 
         }
      }
   }
}

void readMaze(char maze[ROWS][COLS]) {   
   maze[0][0] = '?';
}

