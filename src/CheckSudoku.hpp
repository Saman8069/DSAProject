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
     
    bool check(vector<vector<int>> s, int girdsize);
    bool isComplete(vector<vector<int>> s, int gridsize);
    
    ~checkSudoku(){}
};




#endif