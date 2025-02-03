#ifndef SOLVESUDOKU_H
#define SOLVESUDOKU_H

#include <iostream>
#include <vector>
#include <set>
#include "giveSudoku.hpp"

using namespace std;

class solveSudoku{
private:
 int n; 

 vector<vector<int>> solvableSudoku;
public:
    solveSudoku(giveSudoku& obj){
        n=obj.sudoku.size();
        solvableSudoku.resize(n,vector<int>(n,0));
        solvableSudoku = obj.sudoku;
    }

    vector<vector<int>> solve(vector<vector<int>> solvableSudoku,int n);
    
    ~solveSudoku(){}

};
#endif