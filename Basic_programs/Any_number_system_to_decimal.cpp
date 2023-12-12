#include <iostream>
using namespace std;
int main()
{
  int num, decimal = 0, pvalue = 1, base;
  cout << "Enter the number: ";
  cin >> num;
  cout << "Enter the base of number system : ";
  cin >> base;

  while (num != 0)
  {
    decimal += (num % 10) * pvalue;
    num /= 10;
    pvalue *= base;
  }
  cout << "Decimal equivalent is : " << decimal << endl;
  return 0;
}