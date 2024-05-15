#include <iostream>
using namespace std;

int addNo(int a, int b)
{
  int sum = a + b;
  return sum;
}
int maxNo(int a, int b, int c)
{
  if (a > b && a > c)
  {
    return a;
  }
  else if (b > a && b > c)
  {
    return b;
  }
  else if (c > a && c > b)
  {
    return c;
  }
  else
  {
    return a;
  }
}

int main()
{
  int a, b, c;
  cout << "Enter the first number:";
  cin >> a;

  cout << "Enter the second number:";
  cin >> b;
  cout << "Enter the third number:";
  cin >> c;

  cout << "Address of the a" << &a; // Taking address of the value

  int sum = addNo(a, b);
  int maximumNo = maxNo(a, b, c);

  cout << endl
       << "The Sum of two values: " << sum;
  cout << endl
       << "The maximum of three values: " << maximumNo;
  return 0;
}