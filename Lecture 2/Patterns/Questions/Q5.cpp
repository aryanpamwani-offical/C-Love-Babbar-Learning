/**
 * Pattern
  
    #####
    ####
    ###
    ##
    #

**/

#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cout << "Enter the no of rows:";
    cin>>rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = rowCount; col > row; col--)  
        // for (int col = 0; col < rowcount-row; col++) #Both logic are correct 
        {
            cout << "#";
        }
        cout << endl;
    }
    
}