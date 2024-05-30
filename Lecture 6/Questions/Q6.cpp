#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int min1=INT_MAX;
    int arr[]={12,15,16,17,18,19,20};
    int size=6;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>min1)
        {
            min1=arr[i];
        }
        
    }
    cout << "Maximun No: " << min1;

}
