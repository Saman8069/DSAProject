#ifndef RAYLIBUI_HPP
#define RAYLIBUI_HPP

#include <iostream>
#include <vector>
#include "giveSudoku.hpp"

class RaylibUI {
  private:
    int n;
  public:
    RaylibUI(giveSudoku& obj){
      n=obj.sudoku.size();
   }
  void RunRaylib();

  ~RaylibUI(){}


};

#endif // RAYLIBUI_HPP