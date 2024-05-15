/**  Pattern
 * 
    #####
    #####
    #####
    #####

 * 
**/

#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cout << "Enter no of rows: ";
    cin>>rowCount; 
    for (int rows = 0; rows < rowCount; rows++)
    {
        for (int col = 0; col < rowCount; col++)
        {
             cout << "#";
        }
        cout << endl;
    }
    
}