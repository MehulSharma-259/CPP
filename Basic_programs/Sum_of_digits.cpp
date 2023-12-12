#include <iostream>
using namespace std;
int main()
{
  int number, digits = 0, sum = 0;
  cout << "Enter the number :  ";
  cin >> number;
  int copy = number;
  while(copy != 0)
  {
    digits++;
    sum += copy % 10;
    copy /= 10;
  }
  cout << "Number of digits are: " << digits << endl << "Sum of the digits is: " << sum << endl;
  return 0;
}