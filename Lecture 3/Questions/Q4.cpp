#include <iostream>
using namespace std;

int main()
{
    int rowCount;
    cout << "Enter the no of rows: ";
    cin >> rowCount;
      for (int row = 0; row<rowCount; row++)
    {
        for (int col = 0; col < row+1; col++)
        {   
            int logic=col+1;
            char ch=logic+'A'-1;
            cout<< ch;
           
        
        }
            //Reverse counting 
         for (int col = row; col>=1; col--)
         {
             
            char ch=col+'A'-1;
           cout<< ch;
         }
         
        cout <<endl;
    }
}