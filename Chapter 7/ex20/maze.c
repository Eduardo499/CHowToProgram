#include <stdio.h>

#define ROWS 12
#define COLS 12

char maze[ROWS][COLS] = {
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
    {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
    {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
    {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', ' '},
    {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
    {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
};

int dirX[] = {1, 0, -1, 0};
int dirY[] = {0, 1, 0, -1};

void printMaze() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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
    int startX = 1, startY = 1; 

    printf("Initial Maze:\n");
    printMaze();

    if (solveMaze(startX, startY)) {
        printf("Solved Maze:\n");
        printMaze();
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
