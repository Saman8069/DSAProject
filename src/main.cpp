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
  if(!cs.check())
    cout<<"The given sudoku has contradicitng attributes."<<endl;
 else{ // vector<vector<int>> sudoku;
  gs.assignValues();
  // sudoku = ss.solve();
  gs.display(ss.solve());
 }
  return 0;
}