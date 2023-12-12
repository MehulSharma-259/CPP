#include <iostream>
using namespace std;
void swapValue (int &x, int &y) // address of x me num1 ka address yani x ab sedhe num1 ki value access kar rha na ki usme num1 ki copy gyi. Inside the function, the reference parameter is treated as an alias for the original variable. Any operations on the reference are actually performed on the memory location of the original variable
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}
int main()
{
  int num1, num2;
  
  cout << "Enter the value of num1 and num2 : ";
  cin >> num1 >> num2;
  
  cout << "num1 : " << num1 << endl << "num2 : " << num2 << endl << endl;
  
  swapValue (num1, num2);
  
  cout << "num1 : " << num1 << endl << "num2 : " << num2 << endl;
  return 0;
}