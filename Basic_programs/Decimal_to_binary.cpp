#include <iostream>
using namespace std;
int main()
{
  int num, ans = 0, parityDigit, power = 1;
  cout << "Enter the number in decimal number system :  ";
  cin >> num;

  while (num != 0)
  {
    parityDigit = num % 2;
    ans += parityDigit * power;
    power *= 10;
    num /=2;
  }
  cout << "Binary equivalent is : " << ans << endl;
  return 0;
}