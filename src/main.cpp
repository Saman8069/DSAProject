#include <iostream>
#include <vector>
#include <raylib.h>
#include "checkSudoku.hpp"
#include "solveSudoku.hpp"


// using namespace std;

int cellSize = 60;
int screenSize;
vector<std::vector<int>> board;
int selectedRow = -1, selectedCol = -1;
bool solved = false;
 
void DrawGrid(int gridsize);
void DrawNumbers(int gridsize);
void HandleInput(int gridSize);
void getSudoku(vector<vector<int>> &board);

int main(){
    int gridSize;
    cout<<"Enter the gridSize of the Sudoku";
    cin>>gridSize;
    screenSize = gridSize * cellSize;
    board = vector<vector<int>>(gridSize, vector<int>(gridSize, 0));
    InitWindow(screenSize, screenSize, "Sudoku with Raylib");
    SetTargetFPS(60);
    
    getSudoku(board); // Initialize empty Sudoku grid
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        DrawGrid(gridSize);
        DrawNumbers(gridSize);
        HandleInput(gridSize);
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}

void DrawGrid(int gridSize) {
    for (int i = 0; i <= gridSize; i++) {
        int thickness = (i % 3 == 0) ? 3 : 1;
        DrawLine(i * cellSize, 0, i * cellSize, screenSize, BLACK);
        DrawLine(0, i * cellSize, screenSize, i * cellSize, BLACK);
    }
}

void DrawNumbers(int gridSize) {
    for (int row = 0; row < gridSize; row++) {
        for (int col = 0; col < gridSize; col++) {
            if (board[row][col] != 0) {
                DrawText(TextFormat("%d", board[row][col]), col * cellSize + 20, row * cellSize + 15, 30, solved ? BLUE : BLACK);
            }
        }
    }
}

void HandleInput(int gridSize) {
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        Vector2 mousePos = GetMousePosition();
        selectedRow = mousePos.y / cellSize;
        selectedCol = mousePos.x / cellSize;
    }
    for (int key = KEY_ONE; key <= KEY_NINE; key++) {
        if (IsKeyPressed(key) && selectedRow != -1 && selectedCol != -1 && selectedRow < gridSize && selectedCol < gridSize) {
            board[selectedRow][selectedCol] = key - KEY_ZERO;
        }
    }
    if (IsKeyPressed(KEY_ENTER)) {
        checkSudoku cs;
        if(cs.check(board,gridSize)){
        solveSudoku ss;
        board=ss.solve(board,gridSize,gridSize); // Solve the puzzle when Enter is pressed
        solved = true;
        }
        else{
            cout<<"The sudoku has contradictiong attributes. Press any key to close"<<endl;
            solved = false;
        }
    }
}

void getSudoku(vector<vector<int>> &board) {
    int n = board.size();
    board = vector<vector<int>>(n, vector<int>(n, 0)); // Initialize empty board
}
