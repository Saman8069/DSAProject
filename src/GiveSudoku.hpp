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
        cout<<"Enter the gridsize of Sudoku"<<endl;
        cin>>n;
        sudoku.resize(n, vector<int>(n,0));
    }

    vector<vector<int>> assignValues();
    void display(vector<vector<int>>& s);
    
    friend class solveSudoku;
    
    ~giveSudoku(){}
};

#endif // GIVESUDOKU_H
