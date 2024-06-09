#include <iostream>
using namespace std;
int main(){
    int arr[8]={12,15,19,65,867,54,45};
    int size =8;
    int start=0;
    int end=size-1;
    while (start<=end)
    {
       if (start==end)
       {
        cout << arr[end] <<" ";
       }
       else
       {
        cout << arr[start]<<" " <<arr[end]<<" ";
        
       }
       start++;
       end--;
       
    }
    
}
