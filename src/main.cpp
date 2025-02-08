#include <iostream>
#include <vector>
// #include "raylib.hpp"
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
  else{ 
      sudoku=ss.solve(sudoku,0,0);
      gs.display(sudoku);
   }
   
 cout<<"Press a key to close";
 cin.get();
 return 0;
}