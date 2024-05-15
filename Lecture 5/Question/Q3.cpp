#include <iostream>
using namespace std;
char getGrade(int marks){
    if (marks>=90)
    {
        return 'A';
    }
    else if (marks>=80)
    {
        return 'B';
    }
    else if (marks>=70)
    {
        return 'C';
    }
    else if (marks>=60)
    {
        return 'D';
    }
    
    else if (marks>=50)
    {
        return 'E';
    }
    
    else
    {
        return 'F';
    }
    
}
int main(){
      int marks;
    cout << "Enter the value of marks:";
    cin>>marks;
    char finResult=getGrade(marks);
    cout << finResult;
}