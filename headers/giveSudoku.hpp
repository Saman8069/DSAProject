//
// Created by pants on 1/30/2025.
//

#ifndef GIVESUDOKU_H
#define GIVESUDOKU_H

#include <iostream>
#include <vector>

using namespace std;

class solveSudoku;

class giveSudoku{
 private:
   int n;
   vector<vector<int>> sudoku;
 public:
    giveSudoku(){
        cout<<"Enter the size of Sudoku"<<endl;
        cin>>n;
        sudoku.resize(n, vector<int>(n));
    }

    void assignValues(vector<vector<int>>& sudoku,int n);
    void display(const vector<vector<int>>& sudoku);
    
    friend class solveSudoku;
    
    ~giveSudoku(){}
};

#endif // GIVESUDOKU_H
