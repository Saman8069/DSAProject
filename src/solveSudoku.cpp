#include <iostream>
#include <vector>
#include "checkSudoku.hpp"
#include "solveSudoku.hpp"

using namespace std;

vector<vector<int>> solveSudoku::solve(vector<vector<int>> solvableSudoku,int n){
  int i=0;
  checkSudoku csobj;
  if(csobj.check(solvableSudoku, n)&&csobj.isComplete(solvableSudoku, n))
    return solvableSudoku;
  else{
    for(const auto& row: solvableSudoku){
      int i=0;
      for(int elements: row){
        if(elements!=0)
          continue;
        else{
          while(elements!=0){
            elements=i;
            i=i+1;
            if(csobj.check(solvableSudoku,n))
              return solveSudoku::solve(solvableSudoku,n);
            else
              elements = 0;  
          }
        }            
      }
    }  
  }
}
    