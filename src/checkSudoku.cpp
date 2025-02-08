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
  int subgrid=sqrt(gridsize);
  for(int i=0;i<gridsize;i++){
    for(int j=0;j<gridsize;j++){
      num = sudoku[i][j];
      if(num==0) continue;
      if(num<0||num>gridsize)
       return false;
      grid = (i/subgrid)*subgrid+(j/subgrid);
      if(!rowSet[i].insert(num).second || !clmSet[j].insert(num).second || !gridSet[grid].insert(num).second )
        return false;
    }    
  }
  return true;
}

bool checkSudoku::isComplete(vector<vector<int>> s, int size){
  for(const auto& row: s){
    for(int elements: row){
      if(elements<1||elements>size) return false;
    }
  }
  return true;
}