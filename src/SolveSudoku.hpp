#ifndef SOLVESUDOKU_H
#define SOLVESUDOKU_H

#include <iostream>
#include <vector>
#include <set>
#include "giveSudoku.hpp"

using namespace std;

class solveSudoku{
private:
 int n,i,j; 

 vector<vector<int>> solvableSudoku;
public:
    solveSudoku(giveSudoku& obj){
        n=obj.sudoku.size();
        solvableSudoku.resize(n,vector<int>(n,0));
        solvableSudoku = obj.sudoku;
        i=n;
        j=n;
    }

    vector<vector<int>> solve(vector<vector<int>>& solvableSudoku,int i,int j);    
    ~solveSudoku(){}

};
#endif