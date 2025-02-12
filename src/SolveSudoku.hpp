#ifndef SOLVESUDOKU_H
#define SOLVESUDOKU_H

#include <iostream>
#include <vector>
#include <set>


using namespace std;

class solveSudoku{
private:
 int n,i,j; 

 vector<vector<int>> solvableSudoku;
public:
    solveSudoku(){
    }

    vector<vector<int>> solve(vector<vector<int>>& solvableSudoku,int i,int j);    
    ~solveSudoku(){}

};
#endif