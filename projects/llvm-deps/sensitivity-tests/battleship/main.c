#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 10
#define NUM_SHIPS 4

// Coordinate struct to represent the (x, y) location
typedef struct {
    int x, y;
} Coordinate;

// Board struct to represent each player's board
typedef struct {
    int grid[BOARD_SIZE][BOARD_SIZE];
    int hits; // Track the number of hits to determine game over
} Board;

// Ship struct to represent the ships on the board
typedef struct {
    int length;
    Coordinate position; // Starting coordinate
    int direction; // 0 for horizontal, 1 for vertical
} Ship;

void initBoard(Board* b) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            b->grid[i][j] = 0; // 0 indicates empty/water
        }
    }
    b->hits = 0;
}

int relabel(Board*  to_be_relabel, int predicate, char *label_dynamic,
            char *label_static);

int checkOverlap(Board* b, Ship* s) {
    for (int i = 0; i < s->length; ++i) {
        int x = s->position.x + (s->direction == 0 ? i : 0);
        int y = s->position.y + (s->direction == 1 ? i : 0);
        if (b->grid[y][x] != 0) {
            return 1; // Overlap found
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
    return 0; // Success
}

// Auto game logic for one turn, with hit coordinates feedback using hit_coordinate variable
int autoTurn(Board* opponentBoard, char* playerName) {
    Coordinate hit_coordinate = {rand() % BOARD_SIZE, rand() % BOARD_SIZE};

    int gridValue = opponentBoard->grid[hit_coordinate.y][hit_coordinate.x];
    char *label_bid = "girdValue ? S -> P";
    char *static_bid = "P";

    if (gridValue == 1) { // Hit
        opponentBoard->grid[hit_coordinate.y][hit_coordinate.x] = 3; // Mark as hit
        opponentBoard->hits++;
        relabel(opponentBoard, gridValue, label_bid, static_bid);
	printf("%s hits a ship at (%d,%d)!\n", playerName, hit_coordinate.y, hit_coordinate.x);
        return 1;
    } else if (gridValue == 0) { // Miss
        opponentBoard->grid[hit_coordinate.y][hit_coordinate.x] = 2; // Mark as miss
        printf("%s misses at (%d,%d).\n", playerName, hit_coordinate.y, hit_coordinate.x);
    }
    return 0; // Indicate a miss or repeated guess
}

void placeShipsForPlayer(Board* board) {
    Ship ships[NUM_SHIPS] = {
        {3, {2, 2}, 0}, // A ship of length 3 at (2,2) going horizontally
        {4, {5, 5}, 1}, // A ship of length 4 at (5,5) going vertically
        {2, {0, 1}, 0}, // A ship of length 2 at (0,1) going horizontally
        {3, {7, 0}, 1}  // A ship of length 3 at (7,0) going vertically
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

    int aliceTotalHits = NUM_SHIPS * 3 + 4 + 2 + 3; // Assuming specific ship sizes for simplicity
    int bobTotalHits = aliceTotalHits; // Same configuration for Bob

    // Game loop
    int turn = 0;
    while (aliceBoard.hits < aliceTotalHits && bobBoard.hits < bobTotalHits) {
        if (turn % 2 == 0) {
            autoTurn(&bobBoard, "Alice");
        } else {
            autoTurn(&aliceBoard, "Bob");
        }
        turn++;
    }

    if (aliceBoard.hits == aliceTotalHits) {
        printf("Alice wins!\n");
    } else {
        printf("Bob wins!\n");
    }

    return 0;
}

