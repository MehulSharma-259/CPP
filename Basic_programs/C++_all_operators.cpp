#include <iostream>
using namespace std;
int main() 
{
  int $hello=85, num1=8, num2=5;
  cout <<(num1+num2)<<endl;//13
  cout <<(num1-num2)<<endl;//3
  cout <<(num1*num2)<<endl;//40
  cout <<float (num1)/num2<<endl;//1.6
  
  cout <<(num1<<num2)<<endl;//8X2^5
  cout <<(num1>>num2)<<endl;//8/2^5
  cout <<(num1|num2)<<endl;//13
  cout <<(num1&num2)<<endl;//0
  cout <<(num1||num2)<<endl;//1
  cout <<(num1&&num2)<<endl;//1
  cout<<&num1<<endl<<&num2<<endl;
}