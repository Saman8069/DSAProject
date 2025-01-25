#include <iostream>
using namespace std;
// _ _ _ _
// _ _ _ _
// _ _ _ _
// _ _ _ _
// bool isValid(int s[4][4])
// {
//         for (int i = 0; i < 4 ; i++)
//         {
//             for (int j = 0; j < 4 ; j++){
//                 int x = s[i][j];
//                 if (x ==0) continue;
//                 if(x>4) return false;

                
                
//                 for (int k =0; k<4;k++){
//                     if (i==k) continue;
//                     if(k==j) continue;
//                     int a = s[k][j];
//                     int b = s[i][k];
//                     cout<<x<<a<<" "<<x<<b<<endl;
//                     if(a==0 || b==0) continue;
//                     if(a>4) return false;
//                     if(b>4) return false;

//                     if(x==a) return false;
//                     if(x==b) return false;
//                 }
//             }
//         }
//         return true;
// }

bool isSolvable(int s[4][4])
{  for(int k=0; k<4; k++)
  { for (int i=0; i<4; i++)
      { for(int j=0; j<4; j++)
        {  
          if(s[i][j]>4) return false; 
          if(i==j) continue;
          if(s[k][i] == s[k][j]) return false;
          if(s[i][k] == s[j][k]) return false;
        }
      }
    }
}

int main()
{
    int sudoku[4][4] = {
        {2, 1, 3, 4},
        {3, 4, 1, 2},
        {1, 2, 4, 3},
        {4, 3, 2, 1},
    };
    // if(isValid(sudoku)) cout<<"Solvable";

    if(isSolvable(sudoku)) cout<<"Solvable";
    else cout<<"Unsolvable";
    return 0;
}