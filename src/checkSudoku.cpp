#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_set>
#include "checkSudoku.hpp"

using namespace std;


bool checkSudoku::check(vector<vector<int>> s, int gridsize){
  vector<vector<int>> sudoku(gridsize,vector<int>(gridsize,0));
  sudoku = s;
  vector<unordered_set<int>> rowSet(gridsize);
  vector<unordered_set<int>> clmSet(gridsize);
  vector<unordered_set<int>> gridSet(gridsize);
  int grid,num;
  for(int i=0;i<gridsize;i++){
    for(int j=0;j<gridsize
;j++){
      num = sudoku[i][j];
      if(num<0||num>9)
       return false;
      grid = (i/gridsize
  )*gridsize
   + (j/gridsize
  );
      if(!rowSet[i].insert(num).second || !clmSet[j].insert(num).second || !gridSet[grid].insert(num).second )
        return false;
    }    
  }
  return true;
}

bool checkSudoku::isComplete(vector<vector<int>> s, int size){
  int sn = sqrt(size);
  vector<vector<int>> sudoku(sn,vector<int>(sn,0));
  sudoku = s;
  if(check(sudoku,sn))
    {  for(const auto& row: sudoku){
         for(int elements: row){
          if(elements<1||elements>9)
            return false;
        }
    }
    return true;
  }
}