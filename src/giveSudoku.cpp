#include <iostream>
#include <vector>
#include "giveSudoku.hpp"

using namespace std;

void giveSudoku::display(vector<vector<int>>& sudoku){
  for(const auto& row: sudoku){
    for(int elements: row){
      cout<<elements<< " "; 
    }
    cout<<endl;
  }
}

vector<vector<int>> giveSudoku::assignValues(){
 int gv=0,a,b;
 
 do{

  cout<<"Enter the number of given value"<<endl;
  cin>>gv;
  if(gv>(n*n)) cout<<"Error! The number of given number of value exceeds the no of boxes."<<endl;

 } while (gv>(n*n));
 
 for(int i=0; i<gv; i++){
   cout<<"Enter the position where value is to be inserted"<<endl;
   cin>>a>>b;
   cout<<"Enter the value at "<<a<<" "<<b<<endl;
   cin>>sudoku[a-1][b-1]; //puts the value given by user , -1 is done to maintain index
   display(sudoku); // displays sudoku after each insertion
   cout<<endl;
 }
 return sudoku;
}
   
