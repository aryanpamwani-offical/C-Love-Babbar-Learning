/**  Pattern
 * 
    #####
    #####
    #####

 * 
**/

#include <iostream>
using namespace std;
int main(){
   
   int rowCount,colCount;
    cout << "Enter no of rows: ";
    cin>>rowCount; 
    cout << "Enter no of columns: ";
    cin>>colCount; 
    for (int row = 0; row < rowCount; row++)
    {
        for ( int col = 0; col < colCount; col++)
        {
            cout << "#";
        }
        cout << endl;
    }
    
} 
