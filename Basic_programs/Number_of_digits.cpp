#include <iostream>
using namespace std;
int main()
{
  int number, digits = 0, check=1;
  cout << "Enter the number :  ";
  cin >> number;

  while(number % check != number)
  {
    digits += 1;
    check *= 10;
  }
    /*while(number / 10 != 0)
  {
    digits++;
  }
  cout << digits;*/
  cout << "Number of digits are: " << digits << endl;
  return 0;
}