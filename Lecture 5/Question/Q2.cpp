#include <iostream>
using namespace std;
void printCounting(int n){
for(int i=0; i<n;i++){
   cout << "Counting from 0 to " <<n << " : " << i<<endl; 
}


}
int main(){
    int n;
    cout << "Enter the value of n:";
    cin>>n;
   
    printCounting(n);
    return 0;
}