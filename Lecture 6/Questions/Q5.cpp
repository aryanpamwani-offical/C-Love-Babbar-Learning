#include <iostream>
// count 1 & 0 in array
using namespace std;
 int main(){
    int arr[]={0,0,0,1,1,1,1};
    int size=15;
    int numZero=0;
    int numOne=1;
    for (int i = 0; i < size; i++)
    {
      if (arr[i]==0)
      {
        numZero++;
      }
      else if (arr[i]==1)
      {
        numOne++;
      }
      
    }
    cout <<"Number of zeroes:"<< numZero <<endl ;
    cout <<"Number of ones:"<< numOne ;
} 