#include <iostream>
#include <vector>
#include "giveSudoku.hpp"

using namespace std;

void giveSudoku::display(const vector<vector<int>>& sudoku){
  for(const auto& row: sudoku){
    for(int elements: row){
      cout<<elements<< " "; 
    }
  }
}

void giveSudoku::assignValues(vector<vector<int>>& sudoku,int n){
 int n,gv,a,b;
 vector<vector<int>> sudoku(n,vector<int>(n,0));
 cout<<"Enter the number of given value"<<endl;
 cin>>gv;
 for(int i=0; i<gv; i++){
   cout<<"Enter the position where value is to be inserted"<<endl;
   cin>>a>>b;
   cout<<"Enter the value at "<<a<<b<<endl;
   cin>>sudoku[a][b];
 }
 display(sudoku);
 
}
   
