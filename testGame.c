// By Alistair Parkinson, username alistairpakinson, zPass z5218710
// Lucca Harvey, username luccaharveyy, zPass z#######
// Zac Ching, username zacharyching, zPass z#######
// CTCH, Cuen Heyning
// 26/04/2018
// This code tests mandelbrot.h 

#include <stdio.h>
#include <stdlib.h>
#include "Game.h"
    
int main (int argc, char * argv[]) { 
    Game testGame = newGame(DEFAULT_DISCIPLINES, DEFAULT_DICE);
    disposeGame (testGame);
    printf("All tests passed! You are AWESOME!");
    return EXIT_SUCCESS;
}
