#include <iostream>
using namespace std;
int getEvenNo(int n){
    int sum=0;
for (int i = 2; i <= n; i+2)
{
    sum=sum+i;
}
return sum;
}
int main(){
      int n;
    cout << "Enter the value of n:";
    cin>>n;
    int evenNo=getEvenNo(12);
    cout << evenNo;
}