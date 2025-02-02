#ifndef CHECKSUDOKU_H
#define CHECKSUDOKU_H

#include <iostream>
#include <vector>

using namespace std;

class solveSudoku;

class checkSudoku
{
private:
    /* data */
public:
    checkSudoku(){}
     
    bool check(const vector<vector<int>>& sudoku,int n);
    bool isComplete(const vector<vector<int>>& sudoku);
    
    ~checkSudoku(){}
};




#endif