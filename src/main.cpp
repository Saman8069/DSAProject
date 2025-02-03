#include <iostream>
#include <vector>
#include "checkSudoku.hpp"
#include "giveSudoku.hpp"
#include "solveSudoku.hpp"


using namespace std;
int main(){
  giveSudoku gs;
  checkSudoku cs;
  solveSudoku ss(gs);
  vector<vector<int>> sudoku;
  sudoku = gs.assignValues();
  if(!cs.check(sudoku,sudoku.size()))
    cout<<"The given sudoku has contradicitng attributes."<<endl;
 else{ // vector<vector<int>> sudoku;
  sudoku = ss.solve(sudoku,sudoku.size());
  gs.display(sudoku);
 }
  return 0;
}