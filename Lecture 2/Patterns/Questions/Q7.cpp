/**
 * Pattern
 
123456
12345
1234
123
12
1

* 
**/
#include <iostream>
using namespace std;
int main(){
  int rowcount;
  cout << "Enter the no of rows: ";
  cin>>rowcount;
  for (int row = 0; row < rowcount; row++)
  {
    for (int col = 0; col < rowcount-row; col++)
    {
       cout << col+1;
    }
    cout << endl;
  }
    
} 
