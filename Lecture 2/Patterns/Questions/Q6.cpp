/**
 * Pattern
  
    1
    12
    123
    1234
    12345

**/

#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cout << "Enter the no of rows: ";
    cin>> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
           cout << col+1;
        }
        cout << endl;
    }
    
}