// By Alistair Parkinson, username alistairpakinson, zPass z5218710
// Lucca Harvey, username luccaharveyy, zPass z#######
// Zac Ching, username zacharyching, zPass z#######
// CTCH, Cuen Heyning
// 26/04/2018
// This code tests mandelbrot.h 

#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

typedef struct _region {
    // Gives Regions IDs to call upon
    int regionID;

    int discipline; // Don't know what discipline is used for?

    // Gives each region a resource on grid
    int regionWheat[MAX_WHEAT];
    int regionStone[MAX_STONE];
    int regionWood[MAX_WOOD];
    int regionFarm[MAX_FARM];
} region;

typedef struct _game {
    region regions[NUM_REGIONS];
    int diceValue;
    int MaxPoints;

    // Number of Unis Owned
    int p1Unis[MAX_UNIS];
    int p2Unis[MAX_UNIS];
    int p3Unis[MAX_UNIS];

    // Gives the Unis a location on the map
    int p1UniID[MAX_UNIS];
    int p2UniID[MAX_UNIS];
    int p3UniID[MAX_UNIS];

    // Number of Roads Owned
    int p1Road[MAX_ROAD];
    int p2Road[MAX_ROAD];
    int p3Road[MAX_ROAD];

    // Gives the Roads a location on the map
    int p1RoadID[MAX_ROAD];
    int p2RoadID[MAX_ROAD];
    int p3RoadID[MAX_ROAD];

    // A list to add and take out resources from the players hand
    int p1Resources[MAX_RESOURCE];
    int p2Resources[MAX_RESOURCE];
    int p3Resources[MAX_RESOURCE];


} game;

Game newGame (int discipline[], int dice[]);

void disposeGame (Game g);

void makeAction (Game g, action a);

void throwDice (Game g, int diceScore);

int getDiscipline (Game g, int regionID);

int getDiceValue (Game g, int regionID);

int getMostARCs (Game g);

int getMostPublications (Game g);

int getTurnNumber (Game g);

int getWhoseTurn (Game g);

int getCampus(Game g, path pathToVertex);

int getARC(Game g, path pathToEdge);

int isLegalAction (Game g, action a);

int getKPIpoints (Game g, int player);

int getARCs (Game g, int player);

int getGO8s (Game g, int player);

int getCampuses (Game g, int player);

int getIPs (Game g, int player);

int getPublications (Game g, int player);

int getStudents (Game g, int player, int discipline);

int getExchangeRate (Game g, int player, 
    int disciplineFrom, int disciplineTo);
