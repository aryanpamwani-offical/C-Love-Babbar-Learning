/**
 * Pattern
 
      #
     # #
    # # #
   # # # #
  # # # # #
 # # # # # #

* 
**/

#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cout << "Enter the no of rows: ";
    cin>>rowCount;
    for (int row = 0; row < rowCount; row++)
    {
         for (int space = 0; space < rowCount-row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout << "# ";
        }
       
        cout << endl;
    }
    
}