#include <iostream>
using namespace std;
int main(){
    // int score;
    // cout << "Enter the score: ";
    // cin>>score;
    // if (score>300)
    // {
    //     cout << "India Won";
    // }
    // else{

    // cout << "Us Won";
    // }

    int marks;
    cout << "Enter the marks: ";
    cin>> marks;
    if (marks>=90)
    {
        cout << endl <<" A Grade " << endl;
    }
    else if (marks>=80)
    {
        cout << endl <<" B Grade "<< endl ;
    }
     else if (marks>=60)
    {
        cout <<  endl << " C Grade " << endl;
    }
     else if (marks>=40)
    {
       cout <<  endl <<" D Grade"<< endl;
    }
    else
    {
        cout <<  endl <<" You Failed The Exam "<< endl;
    }
    
} 
