# include <iostream>
using namespace std;
int main()
{
  int i=1, a, b, num1, num2;
  cout << "Enter two numbers: ";
  cin>>num1>>num2;
  
  cout << "LCM is :";
  if (num1 % num2 == 0 || num2 % num1 == 0)
  {
    if(num1 > num2)
      cout << num1 << endl;
    else
      cout << num2 << endl;
  }
    
    else 
      cout << (num1 * num2) << endl;
  return 0;
}