// By Alistair Parkinson, username alistairpakinson, zPass z5218710
// Lucca Harvey, username luccaharveyy, zPass z#######
// Zac Ching, username zacharyching, zPass z#######
// CTCH, Cuen Heyning
// 26/04/2018
// Test file for Knowledge Island Game 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Game.h"

#define DEFAULT_DISCIPLINES {STUDENT_BQN, STUDENT_MMONEY, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MJ, STUDENT_BPS, STUDENT_MTV, \
                STUDENT_MTV, STUDENT_BPS, STUDENT_MTV, STUDENT_BQN, \
                STUDENT_MJ, STUDENT_BQN, STUDENT_THD, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MTV, STUDENT_BQN, STUDENT_BPS}
#define DEFAULT_DICE {9,10,8,12,6,5,3,11,3,11,4,6,4,7,9,2,8,10,5}

int main (int argc, char * argv[]) { 
    int disciplines[] = DEFAULT_DISCIPLINES;
    int dice[] = DEFAULT_DICE;
    printf ("Creating testGame\n");
    Game testGame = newGame (disciplines, dice);

    printf ("Test getDiscipline");
    assert (getDiscipline (testGame, 0) == STUDENT_BQN);
    assert (getDiscipline (testGame, 1) == STUDENT_MMONEY);
    assert (getDiscipline (testGame, 2) == STUDENT_MJ);
    assert (getDiscipline (testGame, 3) == STUDENT_MMONEY);
    assert (getDiscipline (testGame, 4) == STUDENT_MJ);
    assert (getDiscipline (testGame, 5) == STUDENT_BPS);
    assert (getDiscipline (testGame, 6) == STUDENT_MTV);
    assert (getDiscipline (testGame, 7) == STUDENT_MTV);
    assert (getDiscipline (testGame, 8) == STUDENT_BPS);
    assert (getDiscipline (testGame, 9) == STUDENT_MTV);
    assert (getDiscipline (testGame, 10) == STUDENT_BQN);
    assert (getDiscipline (testGame, 11) == STUDENT_MJ);
    assert (getDiscipline (testGame, 12) == STUDENT_BQN);
    assert (getDiscipline (testGame, 13) == STUDENT_THD);
    assert (getDiscipline (testGame, 14) == STUDENT_MJ);
    assert (getDiscipline (testGame, 15) == STUDENT_MMONEY);
    assert (getDiscipline (testGame, 16) == STUDENT_MTV);
    assert (getDiscipline (testGame, 17) == STUDENT_BQN);
    assert (getDiscipline (testGame, 18) == STUDENT_BPS);

    printf ("Test getDiceValue\n");
    assert (getDiceValue (testGame, 0) == 9);
    assert (getDiceValue (testGame, 1) == 10);
    assert (getDiceValue (testGame, 2) == 8);
    assert (getDiceValue (testGame, 3) == 12);
    assert (getDiceValue (testGame, 4) == 6);
    assert (getDiceValue (testGame, 5) == 5);
    assert (getDiceValue (testGame, 6) == 3);
    assert (getDiceValue (testGame, 7) == 11);
    assert (getDiceValue (testGame, 8) == 3);
    assert (getDiceValue (testGame, 9) == 11);
    assert (getDiceValue (testGame, 10) == 4);
    assert (getDiceValue (testGame, 11) == 6);
    assert (getDiceValue (testGame, 12) == 4);
    assert (getDiceValue (testGame, 13) == 7);
    assert (getDiceValue (testGame, 14) == 9);
    assert (getDiceValue (testGame, 15) == 2);
    assert (getDiceValue (testGame, 16) == 8);
    assert (getDiceValue (testGame, 17) == 10);
    assert (getDiceValue (testGame, 18) == 5);

    printf ("Test getMostARCS\n");
    assert (getMostARCS (testGame) == NO_ONE);

    printf ("Test getTurnNumber\n");
    assert (getTurnNumber (testGame) == -1);

    printf ("Test getWhoseTurn\n");
    assert (getWhoseTurn (testGame) == NO_ONE);

    printf ("Disposing testGame\n");
    disposeGame (testGame);

    printf("All tests passed, you are AWESOME!\n");
    return EXIT_SUCCESS;
}
