#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 10
#define NUM_SHIPS 4

//coordinates
typedef struct {
    int x, y;
} Coordinate;
//Board
typedef struct {
    int grid[BOARD_SIZE][BOARD_SIZE];
    int hits; // Number of hits
} Board;

//ship
typedef struct {
    int length;
    Coordinate position; // Starting coordinate
    int direction; // 0 horizontal, 1 vertical
} Ship;

void initBoard(Board* b) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            b->grid[i][j] = 0; // 0 for empty
        }
    }
    b->hits = 0;
}

int relabel(void*  to_be_relabel, int predicate, char *label_dynamic,
            char *label_static);

int checkOverlap(Board* b, Ship* s) {
    for (int i = 0; i < s->length; ++i) {
        int x = s->position.x + (s->direction == 0 ? i : 0);
        int y = s->position.y + (s->direction == 1 ? i : 0);
        if (b->grid[y][x] != 0) {
            return 1; // Overlap
        }
    }
    return 0; // No overlap
}

int placeShip(Board* b, Ship* s) {
    if (checkOverlap(b, s)) {
        printf("Error: Overlapping ships.\n");
        return -1;
    }

    for (int i = 0; i < s->length; ++i) {
        if (s->direction == 0) // Horizontal
            b->grid[s->position.y][s->position.x + i] = 1; // 1 indicates a ship
        else // Vertical
            b->grid[s->position.y + i][s->position.x] = 1;
    }
    return 0;
}

int autoTurn(Board* opponentBoard, Coordinate* hit_coordinate,  char* playerName) {
   // Coordinate hit_coordinate = {rand() % BOARD_SIZE, rand() % BOARD_SIZE};

    int beinghit = opponentBoard->grid[hit_coordinate->y][hit_coordinate->x];
    char *label_bid = "beinghit ? S -> P";
    char *static_bid = "P";
    int hit_place = 0;
    if (beinghit == 1) { // Hit
        opponentBoard->grid[hit_coordinate->y][hit_coordinate->x] = 5;
        opponentBoard->hits++;
        hit_place =  relabel(&hit_coordinate, beinghit, label_bid, static_bid) + 10;
        return 1;
    } else { // Miss
        opponentBoard->grid[hit_coordinate->y][hit_coordinate->x] = 4;
    }
    return 0; // All miss all repeat guess
}

void placeShipsForPlayer(Board* board) {
    Ship ships[NUM_SHIPS] = {
        {3, {2, 2}, 0}, // length 3 at (2,2) horizontal
        {4, {5, 5}, 1}, // ship length 4 at (5,5) vertical
        {2, {0, 1}, 0}, // ship length 2 at (0,1) horizontal
        {3, {7, 0}, 1}  // ship length 3 at (7,0) vertical
    };

    for (int i = 0; i < NUM_SHIPS; ++i) {
        placeShip(board, &ships[i]);
    }
}

int main() {
    srand(time(NULL)); // Initialize random seed

    Board aliceBoard, bobBoard;
    initBoard(&aliceBoard);
    initBoard(&bobBoard);

    placeShipsForPlayer(&aliceBoard);
    placeShipsForPlayer(&bobBoard);

    int aliceTotalHits = 12; // Assuming specific ship sizes
    int bobTotalHits = 12; // Same as Alice

    int turn = 0;
    while (aliceBoard.hits < aliceTotalHits && bobBoard.hits < bobTotalHits) {
        if (turn % 2 == 0) {
	    Coordinate hit_coordinate = {rand() % BOARD_SIZE, rand() % BOARD_SIZE};
           // autoTurn(&bobBoard, "Alice");
	   autoTurn(&bobBoard, &hit_coordinate, "Alice");
        } else {
	    Coordinate hit_coordinate = {rand() % BOARD_SIZE, rand() % BOARD_SIZE};
           // autoTurn(&aliceBoard, "Bob");
	   autoTurn(&aliceBoard, &hit_coordinate, "Bob");
        }
        turn++;
    }

    if (aliceBoard.hits == aliceTotalHits) {
        printf("A wins!\n");
    } else {
        printf("B wins!\n");
    }

    return 0;
}

