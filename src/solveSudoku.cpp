#include <iostream>
#include <vector>
#include "checkSudoku.hpp"
#include "solveSudoku.hpp"

using namespace std;

 vector<vector<int>> solveSudoku::solve(vector<vector<int>>& solvableSudoku, int row = 0, int col = 0) {
        checkSudoku csobj;
        int size = solvableSudoku.size();

        if (row == size) return solvableSudoku;  

        if (col == size) return solveSudoku::solve(solvableSudoku, row + 1, 0); 

        if (solvableSudoku[row][col] != 0) return solveSudoku::solve(solvableSudoku, row, col + 1); 
        for (int num = 1; num <= size; num++) {
            solvableSudoku[row][col] = num;
            if (csobj.check(solvableSudoku, size)) {  
                vector<vector<int>> result = solveSudoku::solve(solvableSudoku, row, col + 1);
                if (!result.empty() && csobj.isComplete(result, size)) return result; 
            }
            solvableSudoku[row][col] = 0;  //backtrack
        }

        return {}; 
    }
    

