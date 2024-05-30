#include <iostream>
using namespace std;
int main() {
    int arr[14];
    int n;
    cout <<"Enter the value of n:";
    cin>> n;
    for (int  i = 0; i < n; i++)
    {
        arr[i]=1;
    }
    cout << "Changing values: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
     
    
} 
