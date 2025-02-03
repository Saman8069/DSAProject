#include <iostream>
#include <vector>
#include "checkSudoku.hpp"
#include "solveSudoku.hpp"

using namespace std;

vector<vector<int>> solveSudoku::solve(vector<vector<int>> solvableSudoku,int n){
  int i=0,
  int num;
  checkSudoku csobj;
  if(csobj.check(solvableSudoku, n)&&csobj.isComplete(solvableSudoku, n))
    return solvableSudoku;
  else{
    for(int row=0;row<n;row++){
      for(int col=0;col<n;col++){
        num = solvableSudoku[row][col];
        while (num!=0)
        {
          solvableSudoku[row][col]=i;
          if(csobj.check(solvableSudoku, n))
            if(csobj.isComplete(solvableSudoku,n)) return solvableSudoku;
            else{
              num=1;
              i=0;
              continue;
            }
          else
          {
            num=0;
            i=i+1;
          }
           
        }
      }
    }
  }
}    