#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_set>
#include "checkSudoku.hpp"

using namespace std;


bool checkSudoku::check(const vector<vector<int>>& sudoku, int n){
  int sn = sqrt(n);
  vector<unordered_set<int>> rowSet(sn);
  vector<unordered_set<int>> clmSet(sn);
  vector<unordered_set<int>> gridSet(sn);
  int grid,num;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      num = sudoku[i][j];
      if(num<0||num>9)
       return false;
      grid = (i/n)*n + (j/n);
      if(!rowSet[i].insert(num).second || !clmSet[j].insert(num).second || !gridSet[grid].insert(num).second )
        return false;
    }    
  }
  return true;
}

bool checkSudoku::isComplete(const vector<vector<int>>& sudoku){
  int n;
  n= sudoku.size();
  if(check(sudoku,n))
    {  for(const auto& row: sudoku){
         for(int elements: row){
          if(elements<1||elements>9)
            return false;
        }
    }
    return true;
  }
}