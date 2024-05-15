#include <iostream>
using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the no of rows: ";
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int space = 0; space < rowCount-row-1; space++)
        {
           cout << " ";
        }
        
        int ascendingCount=row+1;
        for (int col = 0; col < row+1; col++)
        {
           cout << ascendingCount ;
           ascendingCount=ascendingCount+1;
        }
         int reverseCount=2*row;
        for (int col = 0; col < row; col++)
        {
           cout << reverseCount ;
           reverseCount=reverseCount-1;

        }
        cout << endl;
    }
    
    
    }