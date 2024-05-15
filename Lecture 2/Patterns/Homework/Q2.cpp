/**
 * Pattern
 
 # # # # # #
  # # # # #
   # # # #
    # # #
     # #
      #

* 
**/

#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cout << "Enter the no of rows: ";
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int space = 0; space < row+1; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < rowCount-row; col++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    
}