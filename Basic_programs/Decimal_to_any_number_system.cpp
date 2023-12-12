#include <iostream>
using namespace std;
int main()
{
  int num, converted = 0,rev = 0, pvalue = 1, base, loop = 0, count = 0;
  cout << "Enter the number in decimal number system :  ";
  cin >> num;
  cout << "Enter the base of number system you want to convert into : ";
  cin >> base;

  while (num != 0)
  {
    converted *= 10;
    converted += (num % base);
    num /= base;
    loop++;
    if (loop >= 1 && converted == 0)
      count++;
      
  }
  while (converted != 0)
  {
    rev *= 10;
    rev += (converted % 10);
    converted /= 10;
  }

  while(count > 0)
  {
    rev *= 10;
    count--;
  }
  cout << "Base " << base << " equivalent is : " << rev << endl;
  return 0;
}