#include <iostream>
using namespace std;
int main()
{
  int number, digits = 0, rev = 0, sum = 0;
  cout << "Enter the number :  ";
  cin >> number;
  int copy = number;
  while(copy != 0)
  {
    digits++;
    rev *= 10;
    sum += copy % 10;
    rev += copy % 10;
    copy /= 10;
  }
  cout << "Number of digits are: " << digits << endl << "Sum of the digits is: " << sum << endl << "Reverse of the number is: " << rev << endl;
  return 0;
}