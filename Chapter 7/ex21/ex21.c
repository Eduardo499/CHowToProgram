#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 12
#define COLS 12

int dirX[] = {1, 0, -1, 0};
int dirY[] = {0, 1, 0, -1};

char maze[ROWS][COLS];

void printMaze() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void generateMaze(int x, int y) {
    maze[y][x] = '.'; 

    int directions[] = {0, 1, 2, 3}; 
    for (int i = 0; i < 4; i++) {
        int j = rand() % 4;
        int temp = directions[i];
        directions[i] = directions[j];
        directions[j] = temp;
    }

    for (int i = 0; i < 4; i++) {
        int newX = x + dirX[directions[i]] * 2;
        int newY = y + dirY[directions[i]] * 2;

        if (newX > 0 && newX < COLS - 1 && newY > 0 && newY < ROWS - 1 && maze[newY][newX] == '#') {
            maze[y + dirY[directions[i]]][x + dirX[directions[i]]] = '.';
            generateMaze(newX, newY);
        }
    }
}

void setStartAndExit(int *startX, int *startY, int *exitX, int *exitY) {
    do {
        *startX = (rand() % (COLS - 2)) + 1;
        *startY = (rand() % (ROWS - 2)) + 1;
    } while (maze[*startY][*startX] != '.');

    do {
        *exitX = (rand() % (COLS - 2)) + 1;
        *exitY = (rand() % (ROWS - 2)) + 1;
    } while (maze[*exitY][*exitX] != '.' || (*exitX == *startX && *exitY == *startY));

    maze[*exitY][*exitX] = ' ';
}

int solveMaze(int x, int y) {
    if (x < 0 || y < 0 || x >= COLS || y >= ROWS || maze[y][x] == '#' || maze[y][x] == '*') {
        return 0;
    }
    
    if (maze[y][x] == ' ') {
        return 1;
    }
    
    maze[y][x] = '*';
    printMaze();

    for (int i = 0; i < 4; i++) {
        int newX = x + dirX[i];
        int newY = y + dirY[i];

        if (solveMaze(newX, newY)) {
            return 1;
        }
    }

    maze[y][x] = '.';
    return 0;
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            maze[i][j] = '#';
        }
    }

    generateMaze(1, 1);

    int startX, startY, exitX, exitY;
    setStartAndExit(&startX, &startY, &exitX, &exitY);

    printf("Generated Maze:\n");
    printMaze();

    if (solveMaze(startX, startY)) {
        printf("Solved Maze:\n");
        printMaze();
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
