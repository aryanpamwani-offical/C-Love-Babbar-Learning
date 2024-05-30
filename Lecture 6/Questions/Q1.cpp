#include <iostream>
using namespace std;
int main(){
    // int a[53]; 
    // char ch[106];
    // bool b[23];
    // cout << a <<endl;
    // cout << &a <<endl;
// Array Inialisation
// int arr[]={2,45,5,6,7,8};
// cout << arr[2] ;
int arr[5];
for (int index = 0; index < 5; index++)
{
   cin >> arr[index];
   
}
cout << "Printing Array" << endl;
for (int index = 0; index < 5; index++)
{
cout << arr[index] *2;
}
} 
