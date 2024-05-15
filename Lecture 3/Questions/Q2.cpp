/**
 * Pattern
 
##### #####
####   ####
###     ###
##       ##
#         #
#         #
##       ##
###     ###
####   ####
##### #####

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
        
        for (int col = 0; col < rowCount-row; col++)
        {
           cout << "#";
        }

       for (int col = 0; col<2*row+1; col++)
    {
           cout << " ";
        }
        for (int col = 0; col < rowCount-row; col++)
        {
           cout << "#";
        }
        
        cout << endl;
    }
    
    for (int row = 0; row < rowCount; row++)
    {
        
        for (int col = 0; col < row+1; col++)
        {
           cout << "#";
        }

       for (int col = 0; col<2*rowCount-2*row-1; col++)
    {
           cout << " ";
        }
        for (int col = 0; col < row+1; col++)
        {
           cout << "#";
        }
        
        cout << endl;
    }
    

}