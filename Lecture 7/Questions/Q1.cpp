#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int ans=(sizeof(arr)/sizeof(int));
    cout << ans << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    // instert
    arr.push_back(5);
    arr.push_back(6);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl ;
     arr.pop_back();
     for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    vector <int> brr(2,-101);
      for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << endl;
    }
vector <int> crr{12,13,141,4,14};
  for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << endl;
    }
} 
